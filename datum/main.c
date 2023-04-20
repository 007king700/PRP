#include <stdio.h>
#include <stdlib.h>

#define MIN_ROK 2000
#define MAX_ROK 2023

int vstup(const char *txt, int min, int max) {
    int y;
    int countOfChar;
    printf("Zadejte %s mezi %d a %d:\n", txt, min, max);
    do {
        countOfChar = 0;
        scanf("%d", &y);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cele cislo.\n");
        } else if (y < min || y > max) {
            printf("Zadejte cislo mezi %d a %d.\n", min, max);
        }
    } while (countOfChar != 0 || y < min || y > max);
    return y;
}

int prestupny_rok(int rok) {
    return rok % 4 == 0 && rok % 400 == 0 || rok % 100 != 0;
}

int pocet_dnu(int m, int y) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else if (m == 2 && prestupny_rok(y)) {
        return 29;
    } else if (m == 2) {
        return 28;
    } else {
        return 0;
    }
}
int back(){
        int x;
        int countOfChar;
        printf("Pokud chcete vypnout program zadejte 0, nebo zadejte 1 pokud chcete pokracovat:\n");
        do{
            countOfChar = 0;
            scanf("%d", &x);
            while (getchar() != '\n') {
                countOfChar++;
            }
            if (countOfChar != 0) {
                printf("Zadejte 0 nebo 1.\n");
            }else if(x == 0){
                return 0;
            }else if(x == 1){
                return 1;
            }else{
                printf("Zadejte 0 nebo 1.\n");
            }
        }while(countOfChar != 0 || (x != 0 && x != 1));
        return 0;
}

int pocet_dni(int den, int mesic, int rok){
    int dny;
    for(int r=MIN_ROK;r<rok;r++){
        dny += prestupny_rok(r) ? 366 : 365;
    }
    for(int m=1;m<mesic;m++){
        dny+= pocet_dnu(m, rok);
    }
    return (dny+= den -1);
}

int rozdil(int d1, int m1, int r1, int d2, int m2, int r2){
    printf("%d, %d\n", pocet_dni(d1, m1, r1),  pocet_dni(d2, m2, r2));
    return abs(pocet_dni(d1, m1, r1) - pocet_dni(d2, m2, r2));
}

int main() {
    int rok, rok2;
    int mesic, mesic2;
    int den, den2;
    do {
        rok = vstup("rok", MIN_ROK, MAX_ROK);
        mesic = vstup("mesic", 1, 12);
        den = vstup("den", 1, pocet_dnu(mesic, rok));
        printf("Zadal jste: %d. %d. %d\n", den, mesic, rok);
        printf("Od 1. 1. %d ubehlo %d dnu\n", MIN_ROK, pocet_dni(den, mesic, rok));
        rok2 = vstup("rok", MIN_ROK, MAX_ROK);
        mesic2 = vstup("mesic", 1, 12);
        den2 = vstup("den", 1, pocet_dnu(mesic2, rok2));
        printf("Rozdil mezi dvema daty je: %d dnu.\n", rozdil(den, mesic, rok, den2, mesic2, rok2));
    }while (back() == 1);
    return 0;
}
