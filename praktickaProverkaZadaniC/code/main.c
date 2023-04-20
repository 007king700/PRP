#include <stdio.h>
#include <math.h>

#define VSTUP "cisla.txt"
#define VYSTUP "prevody.txt"

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
    int delka_m,cas_s,delka_km,cas_min;
    float ms, kmh, prumer = 0;
    unsigned int z = 0;
    FILE * vstup = fopen(VSTUP,"r");
    FILE * vystup = fopen(VYSTUP, "w");
    if (vstup == NULL){
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else if (vystup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else{
        printf("poradi \t  draha \tcas\trychlost\n --------------------------------------\n");
        fprintf(vystup, "poradi \t \tdraha \t \t cas \t rychlost\n --------------------------------------------------\n");
        while (fscanf(vstup, "%d%d", &delka_m, &cas_s)==2){
            z++;
            float fdelka_m = delka_m,fcas_s = cas_s;
            prumer = prumer + delka_m;
            ms = fdelka_m/fcas_s;
            kmh = ms * 3.6;
            cas_min = cas_s / 60;
            delka_km = delka_m/1000;
            int delka_po = delka_m%1000;
            int cas_po = cas_s % 60;
            ms = truncf(ms*100.0)/100.0;
            kmh = truncf(kmh*100.0)/100.0;
            printf(" %2d. %5d metru %4d sekund %5.2f m/s\n", z, delka_m, cas_s, ms);
            fprintf(vystup, " %2d. %2d km %3d metru %2d minut %2d sekund %6.2f km/h\n", z, delka_km, delka_po, cas_min, cas_po, kmh);
            //z++;
        }
        prumer = prumer / z;
        prumer = truncf(prumer*100.0)/100.0;
        printf("\nPrumerna delka drahy je %.2f metru.\n \n", prumer);
        printf("Ze souboru %s bylo precteno %d dvojic cisel.\n \n", VSTUP, z);
        printf("Soubor %s byl vytvoren.\n", VYSTUP);
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