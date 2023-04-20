#include <stdio.h>

#define VSTUP "cisla.txt"
#define VYSTUP "vystup.txt"

int nasobek(int cislo1, int cislo2) {
    unsigned int x = 2;
    do {
        if (x % cislo1 == 0 && x % cislo2 == 0) {
            break;
        } else {
            x++;
        }
    } while (1);
    return x;
}

int main() {
    unsigned int c1,j1,c2,j2;
    unsigned int z = 0;
    FILE * vstup = fopen(VSTUP,"r");
    FILE * vystup = fopen(VYSTUP, "w");
    if (vstup == NULL){
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else if (vystup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else{
        while (fscanf(vstup, "%d%d%d%d", &c1, &j1, &c2, &j2) ==4){
            unsigned int spol_jmenovatel = nasobek(j1, j2);
            unsigned int Citatel1 = spol_jmenovatel / j1 * c1;
            unsigned int Citatel2 = spol_jmenovatel / j2 * c2;
            unsigned int vysledek = Citatel1 + Citatel2;
            unsigned int x1 = vysledek/spol_jmenovatel, x2 = vysledek-vysledek/spol_jmenovatel*spol_jmenovatel;
            if (vysledek%spol_jmenovatel == 0){
                spol_jmenovatel = 0;
            }
            printf("%d/%d + %d/%d = %d %d/%d\n", c1, j1, c2, j2, x1, x2, spol_jmenovatel);
            fprintf(vystup, "%3d %3d %3d\n", x1, x2, spol_jmenovatel);
            //z++;
        }
        printf("\n");
        if(fclose(vstup) == EOF){
            printf("Soubor %s se nepodarilo zavrit.\n", VSTUP);
        } else if(fclose(vystup) == EOF){
            printf("Soubor %s se nepodarilo zavrit.\n", VSTUP);
        }
            //else{
            //printf("V souboru %s bylo %d cisel.\n", NAZEV_SOUBORU, z);
        //}
    }
    return 0;
}
