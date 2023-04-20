#include <stdio.h>
#include <math.h>

#define VSTUP "cisla.txt"
#define VYSTUP "vystup.txt"

unsigned int nasobek(unsigned int cislo1, unsigned int cislo2) {
    unsigned int x;
    if (cislo1 >= cislo2){
        x = cislo2;
    } else {
        x = cislo1;
    }
    do {
        if (x % cislo1 == 0 && x % cislo2 == 0) {
            break;
        } else {
            if (cislo1 >= cislo2){
                x = x + cislo2;
            } else {
                x = x + cislo1;
            }
        }
    } while (1);
    return x;
}

unsigned int delitel(int cislo1, int cislo2) {
    unsigned int x;
    if(cislo1 > cislo2){
        x = cislo2;
    } else if(cislo2 > cislo1){
        x = cislo1;
    } else{
        return cislo1;
    }
    do {
        if (cislo1 % x == 0 && cislo2 % x == 0) {
            break;
        } else if (x > cislo1 || x > cislo2) {
            return 1;
        } else {
            x--;
        }
    } while (1);
    return x;
}

int main() {
    int cislo1,cislo2;
    float prumer = 0, fprumer = 0;
    unsigned int z = 0, fz = 0;
    FILE * vstup = fopen(VSTUP,"r");
    FILE * vystup = fopen(VYSTUP, "w");
    if (vstup == NULL){
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else if (vystup == NULL) {
        printf("Soubor %s se nepodarilo otevrit, program bude ukoncen.\n", VSTUP);
    } else{
        printf("poradi \t  cislo1 cislo2 nsn\t nsd\n --------------------------------------\n");
        fprintf(vystup, "poradi \t  cislo1 cislo2 nsn\t nsd\n -----------------------------------------\n");
        while (fscanf(vstup, "%d%d", &cislo1, &cislo2)==2){
            z++;
            prumer = prumer + cislo1;
            unsigned int nsn = nasobek(cislo1, cislo2), nsd = delitel(cislo1, cislo2);
            printf(" %6d. %6d %6d %6d %6d \n", z, cislo1, cislo2, nsn, nsd);
            if (nsd > 1){
                fz++;
                fprumer = fprumer + cislo1;
                fprintf(vystup, " %6d. %6d %6d %6d %6d \n", fz, cislo1, cislo2, nsn, nsd);
            }
        }
        prumer = prumer / z;
        prumer = truncf(prumer*100.0)/100.0;
        fprumer = fprumer / fz;
        fprumer = truncf(fprumer*100.0)/100.0;
        printf("\nPrumer cisel v prvnim sloupci je %.2f.\n \n", prumer);
        printf("Ze souboru %s bylo precteno %d dvojic cisel.\n \n", VSTUP, z);
        printf("Soubor %s byl vytvoren.\n \n", VYSTUP);
        fprintf(vystup,"\nPrumer cisel v prvnim sloupci je %.2f.\n \n", fprumer);
        fprintf(vystup,"Ze souboru %s bylo precteno %d dvojic cisel.\n \n", VSTUP, fz);
        if(fclose(vstup) == EOF){
            printf("Soubor %s se nepodarilo zavrit.\n", VSTUP);
        } else if(fclose(vystup) == EOF){
            printf("Soubor %s se nepodarilo zavrit.\n", VYSTUP);
        } else{
            printf("Soubory %s a %s se podarilo zavrit.\n", VSTUP, VYSTUP);
        }
    }
    return 0;
}