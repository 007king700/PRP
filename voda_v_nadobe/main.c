#include <stdio.h>

#define PI 3.14159265359;

int main() {
    float polomer;
    float vyska;
    float litry;
    float objem;
    float vyska_vody;
    int countOfChar;
    printf("Zadejte polomer a vysku valcovite nadoby v cm a kolik vody do ni chcete nalit v litrech, ja vam pote reknu jestli se tam tolik vody vejde.\n");
    do {
        printf("Polomer:\n");
        scanf("%f", &polomer);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || polomer < 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("Vyska:\n");
        scanf("%f", &vyska);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || vyska < 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("Objem vody:\n");
        scanf("%f", &litry);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || litry < 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    litry = litry * 1000;
    objem = polomer * polomer * vyska * PI;
    vyska_vody = litry / (polomer * polomer) / PI;
    if (objem > litry) {
        printf("Objem vami zadaneho valce je dostacujici na pohlceni vami zadaneho objemu vody.\n");
        printf("Voda bude dosahovat vysky %f cm.\n", vyska_vody);
    } else {
        printf("Musite si sehnat vetsi valec.\n");
    }
    return 0;
}
