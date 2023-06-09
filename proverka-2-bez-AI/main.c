#include <stdio.h>

#define UROK  0.0561
#define DAN 0.15
#define MIN 1000
#define MAX 1000000
#define ROK 2023
#define VYSTUP "vypisUctu.txt"

int vstup(int min, int max) {
    int x = 0;
    int countOfChar;
    do {
        countOfChar = 0;
        printf("Zadejte hodnotu v rozmezi %d a %d: \n", min, max);
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cele cislo:\n");
        } else if (x < min) {
            printf("Cislo musi byt vetsi nez %d.\n", min);
        } else if (x > max) {
            printf("Cislo musi byt mensi nez %d.\n", max);
        } else{
            break;
        }
    } while (1);
    return x;
}

int posledni_den(int mesic){
    if (mesic == 1 || mesic == 3 || mesic == 5 || mesic == 7 || mesic == 8 || mesic == 10 || mesic == 12){
        return 31;
    } else if (mesic == 2){
        if ((ROK % 4 == 0 && ROK % 100 != 0) || (ROK % 400 == 0)){
            return 29;
        } else{
            return 28;
        }
    } else{
        return 30;
    }
}

int main() {
    float puvodni_ucet, mesicni_vklad;
    puvodni_ucet = vstup(MIN, MAX);
    mesicni_vklad = vstup(MIN, MAX);
    FILE * vystup = fopen(VYSTUP, "w");
    if (vystup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VYSTUP);
        return 0;
    }

    float urok, dan, ucet = puvodni_ucet;
    fprintf(vystup, "Sporici ucet, rocni urokova mira %.2lf %%\n", UROK * 100);
    fprintf(vystup, "Stav uctu na pocatku roku %d je %.2lf Kc.\n", ROK, ucet);
    fprintf(vystup, "------------------------------------------------------------------------------------------\n");
    fprintf(vystup, "datum       na pocatku mesice          vklad       urok  dan z uroku(%.0lf%%)  na konci mesice\n",DAN*100);

    for (int mesic = 1; mesic <= 12; ++mesic) {
        int den = posledni_den(mesic);
        ucet += mesicni_vklad;
        urok = ucet * (UROK / 12);
        dan = urok * DAN;
        ucet += urok - dan;
        fprintf(vystup, "%02d.%02d.%4d  %14.2lf Kc    %8.2lf Kc  %6.2lf Kc  %9.2lf Kc %17.2lf Kc\n",
                den, mesic, ROK, ucet - mesicni_vklad - urok + dan - 0.005, mesicni_vklad, urok, dan, ucet);
    }

    float rozdil = ucet - puvodni_ucet;
    fprintf(vystup, "------------------------------------------------------------------------------------------\n");
    fprintf(vystup, "Stav na konci roku %d je %.2lf Kc. Usetril jsi %.2lf Kc.\n", ROK, ucet, rozdil);
    fprintf(vystup, "------------------------------------------------------------------------------------------\n");
    if(fclose(vystup) == EOF) {
        printf("Soubor %s se nepodarilo zavrit.\n", VYSTUP);
    } else{
        fclose(vystup);
    }
    printf("Vypis uctu byl ulozen do souboru %s.\n", VYSTUP);
    return 0;
}