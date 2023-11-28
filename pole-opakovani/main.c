#include <stdio.h>
#define NOTFOUND -1

int vstup() {
    int x, countOfChar;
    printf("Zadej cele cislo ktere chces najit v poli: \n");
    do {
        countOfChar = 0;
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadej cele cislo!\n");
        } else{
            return x;
        }
    } while (1);
}

int jeVpoli(int *pole, int cislo, int pocetPrvku){
    for (int i = 0; i < pocetPrvku; ++i) {
        if(pole[i]==cislo){
            return i;
        }
    }
    return NOTFOUND;
}

int main() {
    int pole[]={1,3,5,7,9}, pocetPrvku=sizeof(pole)/sizeof(int), index;
    printf("Velikost pole je: %d\n"
           "Adresa pocatku pole je %p\n",pocetPrvku,pole);
    for (int i = 0; i < pocetPrvku; ++i) {
        printf("Adresa %d. prvku je %p a jeho hodnota je %d\n",i,pole+i,*(pole+i));
    }
    index = jeVpoli(pole, vstup(),pocetPrvku);
    if (index==NOTFOUND){
        printf("Vami zadane cislo se v poli nenachazi\n");
    } else{
        printf("Cislo %d je v poli, ma index %d a adresu %p\n",pole[index],index,pole+index);
    }

    return 0;
}
