#include <stdio.h>

int vstup() {
    int x = 0;
    int countOfChar;
    do {
        countOfChar = 0;
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cele cislo:\n");
        } else if (x < 0) {
            x = x * -1;
        } else if (x == 0) {
            printf("Cislo nemuze byt nula, zadejte ho znovu:\n");
        }
    } while (countOfChar != 0 || x == 0);
    return x;
}

int nasobek(int cislo1, int cislo2) {
    int x = 2;

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
    printf("Zadejte cele cislo:\n");
    int cislo1 = vstup();
    printf("Zadejte druhe cele cislo:\n");
    int cislo2 = vstup();
    printf("Nejmensi spolecny nasobek dvou zadanych cisel je: %d.\n", nasobek(cislo1, cislo2));
    return 0;
}