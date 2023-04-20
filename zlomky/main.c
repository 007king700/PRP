#include <stdio.h>
#include <stdlib.h>

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

unsigned int delitel(int cislo1, int cislo2) {
    unsigned int x = 2;
    do {
        if (abs(cislo1) % x == 0 && abs(cislo2) % x == 0) {
            break;
        } else if (x > abs(cislo1) || x > abs(cislo2)) {
            return 1;
        } else {
            //printf("Delitel: %d\n", x);
            x++;
        }
    } while (1);
    return x;
}

int jmen_soucin(int citatel1, int citatel2, int jmenovatel1, int jmenovatel2) {
    int citatel = citatel1 * citatel2;
    int jmenovatel = jmenovatel1 * jmenovatel2;
    int x = delitel(citatel, jmenovatel);
    int y = jmenovatel / x;
    return y;
}

int cit_soucin(int citatel1, int citatel2, int jmenovatel1, int jmenovatel2) {
    int citatel = citatel1 * citatel2;
    int jmenovatel = jmenovatel1 * jmenovatel2;
    int x = delitel(citatel, jmenovatel);
    int y = citatel / x;
    return y;
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
    int vysledek_souctu = Citatel1 + Citatel2;
    int spol_jmenovatel_souctu = spol_jmenovatel / delitel(vysledek_souctu, spol_jmenovatel);
    vysledek_souctu = vysledek_souctu / delitel(vysledek_souctu, spol_jmenovatel);
    int vysledek_odectu = Citatel1 - Citatel2;
    int spol_jmenovatel_odectu = spol_jmenovatel / delitel(vysledek_odectu, spol_jmenovatel);
    vysledek_odectu = vysledek_odectu / delitel(vysledek_odectu, spol_jmenovatel);
    int citatel_soucinu = cit_soucin(citatel1, citatel2, jmenovatel1, jmenovatel2);
    int jmenovatel_soucinu = jmen_soucin(citatel1, citatel2, jmenovatel1, jmenovatel2);
    int citatel_deleni = cit_soucin(citatel1, jmenovatel2, jmenovatel1, citatel2);
    int jmenovatel_deleni = jmen_soucin(citatel1, jmenovatel2, jmenovatel1, citatel2);
    int soucin_soucinu = citatel_soucinu / jmenovatel_soucinu;
    int zbytek_soucin_soucinu = citatel_soucinu % jmenovatel_soucinu;
    int soucin_deleni = citatel_deleni / jmenovatel_deleni;
    int zbytek_soucin_deleni = citatel_deleni % jmenovatel_deleni;
    int soucin_souctu = vysledek_souctu / spol_jmenovatel_souctu;
    int zbytek_soucin_souctu = vysledek_souctu % spol_jmenovatel_souctu;
    int soucin_odectu = vysledek_odectu / spol_jmenovatel_odectu;
    int zbytek_soucin_odectu = vysledek_odectu % spol_jmenovatel_odectu;
    printf("%d/%d + %d/%d = %d/%d = %d %d/%d.\n", citatel1, jmenovatel1, citatel2, jmenovatel2, vysledek_souctu, spol_jmenovatel_souctu, soucin_souctu, zbytek_soucin_souctu, spol_jmenovatel_souctu);
    printf("%d/%d - %d/%d = %d/%d = %d %d/%d.\n", citatel1, jmenovatel1, citatel2, jmenovatel2, vysledek_odectu, spol_jmenovatel_odectu, soucin_odectu, zbytek_soucin_odectu, spol_jmenovatel_odectu);
    printf("%d/%d * %d/%d = %d/%d = %d %d/%d.\n", citatel1, jmenovatel1, citatel2, jmenovatel2, citatel_soucinu, jmenovatel_soucinu, soucin_soucinu, zbytek_soucin_soucinu, jmenovatel_soucinu);
    printf("%d/%d / %d/%d = %d/%d = %d %d/%d.\n", citatel1, jmenovatel1, citatel2, jmenovatel2, citatel_deleni, jmenovatel_deleni, soucin_deleni, zbytek_soucin_deleni, jmenovatel_deleni);

    return 0;
}