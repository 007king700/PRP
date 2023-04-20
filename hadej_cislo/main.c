#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main() {
    int pocitac;
    int hadac;
    int countOfChar;
    int pokusy = 0;
    srand((unsigned) time(NULL));
    pocitac = rand() % MAX + 1;
    printf("Pocitac vygeneroval nahodne cislo od 1 do %d a vasim ukolem bude ho uhadnout.\n", MAX);
    do {
        scanf("%d", &hadac);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cele cislo.\n");
        } else {
            pokusy++;
            if (hadac == pocitac) {
                printf("Gratuluji, uhadli jste vygenerovane cislo na %d. pokus.\n", pokusy);
            } else {
                printf("Nevadi, priste to uhadnete\n");
            }
        }
    } while (hadac != pocitac);
    return 0;
}