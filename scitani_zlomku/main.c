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
    printf("Zadejte citatele prvniho zlomku:\n");
    int citatel1 = vstup();
    printf("Zadejte jmenovatele prvniho zlomku:\n");
    int jmenovatel1 = vstup();
    printf("Zadejte citatele druheho zlomku:\n");
    int citatel2 = vstup();
    printf("Zadejte jmenovatele druheho zlomku:\n");
    int jmenovatel2 = vstup();
    int spol_jmenovatel = nasobek(jmenovatel1, jmenovatel2);
    int Citatel1 = spol_jmenovatel / jmenovatel1 * citatel1;
    int Citatel2 = spol_jmenovatel / jmenovatel2 * citatel2;
    int vysledek = Citatel1 + Citatel2;
    printf("%d/%d + %d/%d = %d/%d.\n", citatel1, jmenovatel1, citatel2, jmenovatel2, vysledek, spol_jmenovatel);
    return 0;
}