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
    } while (countOfChar != 0 || x <= 0);
    return x;
}

int prvocislo(){
    int x = 2;
    int cislo = vstup();
    do {
        if (cislo % x == 0){
            printf("delitel: %d zadano: %d\n", x, cislo);
            return 0;
        } else if (x < cislo){
            x++;
        } else{
            printf("Co?");
        }
    }while(cislo != x);
    return 1;
}

int main() {
    printf("Pis cislo\n");
    int cislo = prvocislo();
    if (cislo == 0){
        printf("cislo neni prvocislo\n");
    } else if (cislo == 1){
        printf("cislo je prvocislo\n");
    }
    return 0;
}
