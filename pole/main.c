#include <stdio.h>
#define MIN 1
#define MAX 1000000
int vstup(int min, int max) {
    int x, countOfChar;
    printf("Zadej cele cislo v intervalu od %d do %d : ", min, max);

    do {
        countOfChar = 0;
        scanf("%d", &x);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadej cele cislo!\n");
        } else if (x < min) {
            printf("Zadej cele cislo vetsi nez %d!\n",min);
        } else if (x > max){
            printf("Zadej cele cislo mensi nez %d!\n",max);
        } else{
            return x;
        }
    } while (1);
}

int main() {
    for(int i=0;x>=1;i++){
        if(x % prvocisla[i]==0) {
            x = x / prvocisla[i];
            pole[z]=prvocisla[i];
            printf("[%d]",pole[z]);
            z++;
            i=0;
        } else if(x=1){
            pole[z]=1;
            printf("[%d]",pole[z]);
            break;
        }
    }
    return 0;
}