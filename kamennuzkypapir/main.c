#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KAMEN 1
#define NUZKY 2
#define PAPIR 3

int main() {
    int cislo;
    int zadat;
    int score;
    int pokusy = 0;
    srand((unsigned) time(NULL));
    printf("1 = KÁMEN.\n2 = NŮŽKY.\n3 = PAPÍR");

    do {
        pokusy++;
        cislo = rand() % 3 + 1;
        printf("\nZadejte číslo 1-3.\n");
        scanf("%d", &zadat);
        if ((zadat > 3) && (zadat != 8)) {
            printf("Drž se instrukcemi.\n");
        }
        if (zadat < 1) {
            printf("Drž se instrukcemi.\n");
        }
        if ((zadat > 0) && (zadat < 4)) {
            if (zadat == 1) {
                printf("Zadal jsi KÁMEN. \n");
            } else if (zadat == 2) {
                printf("Zadal jsi NŮŽKY. \n");
            } else {
                printf("Zadal jsi PAPÍR. \n");
            }
            if (cislo == 1) {
                printf("Počítač vygeneroval KÁMEN. \n");
            } else if (cislo == 2) {
                printf("Počítač vygeneroval NŮŽKY. \n");
            } else {
                printf("Počítač vygeneroval PAPÍR. \n");
            }
            if (cislo == zadat) {
                printf("REMÍZA. \n");
            } else if ((cislo == 2 && zadat == 1) || (cislo == 3 && zadat == 2) || (cislo == 1 && zadat == 3)) {
                printf("Vyhrál jsi.\n");
                score++;
            } else {
                printf("Prohrál jsi. \n");
            }
            printf("Tvé skore je %d. \n", score);
            printf("Toto byl tvůj %d pokus. \n", pokusy);
        }
    } while (zadat != 8);
    return 0;

}