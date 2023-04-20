#include <stdio.h>

float vstup(){
    float x = 0;
    int countOfChar;
    do {
        countOfChar = 0;
        scanf("%f", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo:\n");
        } else if (x <= 0) {
            printf("Zadejte kladne cislo:\n");
        }
    } while (countOfChar != 0 || x <= 0);
    return x;
}

float back() {
    int x;
    int countOfChar;
    printf("Pro vypnuti programu zadejte 00, pro pokracovani zadejte 11:\n");
    do {
        countOfChar = 0;
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte 11 nebo 00.\n");
        } else if (x == 11) {
            return 0;
        } else if (x == 00) {
            return 1;
        } else {
            printf("Zadejte 11 nebo 00.\n");
        }
    } while (countOfChar != 0 || (x != 00 && x != 11));
    return 0;
}
int main() {
    float ucet, urok, vysledek;
    do{
        printf("Zadejte jaky zustatek mate na uctu:\n");
        ucet = vstup();
        printf("Zadejte jaky urok mate na uctu:\n");
        urok = vstup();
        vysledek = ucet * urok / 100 + ucet;
        printf("Zustatek na uctu je po roce: %f Kc.\n", vysledek);
    }while(back() == 00);
}