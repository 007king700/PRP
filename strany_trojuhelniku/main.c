#include <stdio.h>

int main() {
    float strana_1;
    float strana_2;
    float strana_3;
    float soucet_kratsich_stran;
    int countOfChar;
    printf("Zadejte delky tri stran v cm a ja vam reknu jestli z nich udelate trojuhelnik.\n");
    do {
        printf("Strana 1:\n");
        scanf("%f", &strana_1);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || strana_1 <= 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("Strana 2:\n");
        scanf("%f", &strana_2);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || strana_2 <= 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("Strana 3:\n");
        scanf("%f", &strana_3);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || strana_3 <= 0) {
            printf("Zadejte kladne cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    if (strana_1 > strana_2) {
        if (strana_1 > strana_3) {
            soucet_kratsich_stran = strana_2 + strana_3;
            if (strana_1 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_1 + strana_2;
            if (strana_3 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_1 > strana_3) {
        if (strana_1 > strana_2) {
            soucet_kratsich_stran = strana_2 + strana_3;
            if (strana_1 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_1 + strana_3;
            if (strana_2 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_2 > strana_3) {
        if (strana_2 > strana_1) {
            soucet_kratsich_stran = strana_1 + strana_3;
            if (strana_2 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_2 + strana_3;
            if (strana_1 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_3 > strana_2) {
        if (strana_3 > strana_1) {
            soucet_kratsich_stran = strana_1 + strana_2;
            if (strana_3 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_3 + strana_2;
            if (strana_1 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_3 > strana_1) {
        if (strana_3 > strana_2) {
            soucet_kratsich_stran = strana_2 + strana_1;
            if (strana_3 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_1 + strana_3;
            if (strana_2 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_2 > strana_1) {
        if (strana_2 > strana_3) {
            soucet_kratsich_stran = strana_1 + strana_3;
            if (strana_2 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        } else {
            soucet_kratsich_stran = strana_2 + strana_1;
            if (strana_3 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_1 == strana_2) {
        if (strana_1 > strana_3) {
            printf("Z techto stran sestavite trojuhelnik.\n");
        } else {
            soucet_kratsich_stran = strana_1 + strana_2;
            if (strana_3 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_1 == strana_3) {
        if (strana_1 > strana_2) {
            printf("Z techto stran sestavite trojuhelnik.\n");
        } else {
            soucet_kratsich_stran = strana_1 + strana_3;
            if (strana_2 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    } else if (strana_3 == strana_2) {
        if (strana_3 > strana_1) {
            printf("Z techto stran sestavite trojuhelnik.\n");
        } else {
            soucet_kratsich_stran = strana_3 + strana_2;
            if (strana_1 < soucet_kratsich_stran) {
                printf("Z techto stran sestavite trojuhelnik.\n");
            } else {
                printf("Z techto stran nesestavite trojuhelnik.\n");
            }
        }
    }
    return 0;
}