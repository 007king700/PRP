#include <stdio.h>

int vice_uctenek() {
    int x;
    int countOfChar;
    printf("Pokud chcete pripocist dalsi uctenku zadejte 1, pokud ne zadejte 0:\n");
    do {
        countOfChar = 0;
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte 1 nebo 0.\n");
        } else if (x == 1) {
            printf("Zadejte dalsi uctenku:\n");
            return 0;
        } else if (x == 0) {
            return 1;
        } else {
            printf("Zadejte 1 nebo 0.\n");
        }
    } while (countOfChar != 0 || (x != 0 && x != 1));
    return 0;
}

float uctenka(float celkova_utrata) {
    float utrata;
    int countOfChar;
    do {
        scanf("%f", &utrata);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo.\n");
        } else if (utrata <= 0) {
            printf("Zadejte kladne cislo.\n");
        }
    } while (countOfChar != 0 || utrata <= 0);
    celkova_utrata = celkova_utrata + utrata;
    return celkova_utrata;
}

int main() {
    float zaplaceno;
    int pocet_uctenek;
    float prumerena_utrata;
    zaplaceno = 0;
    pocet_uctenek = 0;
    printf("Zadejte, kolik jste zaplatili ve vasem nakupu podle uctenky (muzete zadat i halere).\n");
    do {
        zaplaceno = uctenka(zaplaceno);
        pocet_uctenek++;
    } while (vice_uctenek() == 0);
    prumerena_utrata = zaplaceno / pocet_uctenek;
    printf("Celkem jste zaplatili %f a vase prumerna utrata byla %f.\n", zaplaceno, prumerena_utrata);
    return 0;
}
