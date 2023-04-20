#include <stdio.h>

unsigned int mocnina(int z, int y){
    unsigned int x = 1;
    for (;y > 0; y--) {
        x *= z;
    }
    return x;
}

int vstup(const char * txt, int min, int max) {
    int countOfChar;
    int cislo;
    printf("Zadejte %s mezi %d a %d:\n", txt, min, max);
    do {
        countOfChar = 0;
        scanf("%d", &cislo);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte %s mezi %d a %d:\n", txt, min, max);
        } else if(cislo<min || cislo>max){
            printf("Zadejte %s mezi %d a %d:\n", txt, min, max);
        }
    } while (countOfChar != 0 || cislo<min || cislo>max);
    return cislo;
}

int back(){
    int x;
    int countOfChar;
    printf("Chcete vypnout program? [a/n]:\n");
    do{
        countOfChar = 0;
        x=getchar();
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte a nebo n:\n");
        }
        else if(x=='a'){
            return 0;
        } else if(x=='n'){
            return 1;
        } else {
            printf("Zadejte a nebo n:\n");
            countOfChar++;
        }
    }while(countOfChar != 0);
}

int main() {
    do{
        int cislo = vstup("cislo", 2, 9);
        int exponent = vstup("exponent", 2, 10);
        printf("%d^%d = %u\n", cislo, exponent, mocnina(cislo, exponent));
    }while (back() == 1);
    return 0;
}
