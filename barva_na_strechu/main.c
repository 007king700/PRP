#include <stdio.h>

float barva(){
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

int main() {
    float barva1_m2_na_kg;
    float barva2_m2_na_kg;
    float barva1_cena_za_kg;
    float barva2_cena_za_kg;
    float barva1;
    float barva2;
    float okolik;
    printf("Zadejte kolik m2 natrete z jednoho kilogramu barvy cislo 1:\n");
    barva1_m2_na_kg = barva();
    printf("Zadejte cenu 1 kilogramu barvy cislo 1:\n");
    barva1_cena_za_kg = barva();
    printf("Zadejte kolik m2 natrete z jednoho kilogramu barvy cislo 2:\n");
    barva2_m2_na_kg = barva();
    printf("Zadejte cenu 1 kilogramu barvy cislo 2:\n");
    barva2_cena_za_kg = barva();
    barva1 = barva1_m2_na_kg / barva1_cena_za_kg;
    barva2 = barva2_m2_na_kg / barva2_cena_za_kg;
    barva1 = 200 / barva1;
    barva2 = 200 / barva2;
    if (barva1 > barva2){
        okolik = barva1 - barva2;
        printf("Lepsi je pouzit barvu 2, bude levnejsi nez barva 1 o %f korun.\n", okolik);
    } else if (barva1 < barva2){
        okolik = barva2 - barva1;
        printf("Lepsi je pouzit barvu 1, bude levnejsi nez barva 2 o %f korun.\n", okolik);
    } else {
        printf("Obe barvy vas vyjdou cenove stejne.\n");
    }
    return 0;
}
