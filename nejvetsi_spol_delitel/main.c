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
            //printf("Nasobek: %d\n", x);
            //printf("%d\n", cislo2 * cislo1);
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
    unsigned int x = 2;
    do {
        if (cislo1 % x == 0 && cislo2 % x == 0) {
            break;
        } else if (x > cislo1 || x > cislo2) {
            return 1;
        } else {
            printf("Delitel: %d\n", x);
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
    printf("Nejmensi spolecny nasobek cisel %d a %d je: %d.\n", cislo1, cislo2, nasobek(cislo1, cislo2));
    printf("Nejvetsi spolecny delitel cisel %d a %d je: %d.\n", cislo1, cislo2, delitel(cislo1, cislo2));
    return 0;
}