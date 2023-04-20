#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POCET 200
#define NAZEV_SOUBORU "cisla.txt"

int main() {
    int cislo;
    srand((unsigned) time(NULL));
    FILE *soubor = fopen(NAZEV_SOUBORU, "w");
    if (soubor == NULL) {
        printf("Soubor %s se nepodarilo otevrit.\n", NAZEV_SOUBORU);
    }
    for (int i = 0; i < POCET; ++i) {
        cislo = rand() % 99 + 1;
        printf("%3d\n", cislo);
        fprintf(soubor, "%3d", cislo);
    }
    if (fclose(soubor) == EOF) {
        printf("Soubor %s se nepodarilo zavrit.\n", NAZEV_SOUBORU);
    } else {
        printf("Soubor %s byl vytvoren\n", NAZEV_SOUBORU);
    }
    return 0;
}
