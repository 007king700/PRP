#include <stdio.h>

int vstup(){
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
        } else if (x <= 2) {
            printf("Zadejte cele cislo vetsi nez 1:\n");
        }
    } while (countOfChar != 0 || x <= 2);
    return x;
}

int prvocislo(){
    int x = 2;
    int cislo = vstup();
    do {
        if (cislo % x == 0){
            printf("delitel: %d, zbytek: %d\n", x, cislo / x);
            cislo = cislo / x;
            x = 2;
        } else if (x < cislo){
            x++;
        } else{
            printf("Co?");
        }
    }while(cislo != x);
    return cislo;
}

int main() {
    printf("Pis cislo\n");
    int cislo = prvocislo();
    printf("Konecny prvociselny zbytek cisla je: %d\n", cislo);
    return 0;
}