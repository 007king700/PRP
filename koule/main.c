#include <stdio.h>

#define PI 3.14159265359

int main() {
    float polomer;
    float objem;
    float povrch;
    float obvod;
    float obsah;
    int countOfChar;
    do {
        printf("Zadejte polomer koule kterou chcete vypocitat v cm:\n");
        scanf("%f", &polomer);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || polomer < 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            objem = 4.0 / 3.0 * polomer * PI * polomer * polomer;
            povrch = 4 * PI * polomer * polomer;
            obvod = 2 * PI * polomer;
            obsah = PI * polomer * polomer;
            printf("Objem teto koule je: %f\n", objem);
            printf("Povrch teto koule je: %f\n", povrch);
            printf("Obvod kruhu v teto kouli je: %f\n", obvod);
            printf("Obsah kruhu v teto kouli je: %f\n", obsah);
        }
    } while (polomer != 0);
}