#include <stdio.h>
#define PIN 1234
#define POKUSY 3

int main() {
    int pin;
    int countOfChar;
    int pokusy = POKUSY;
    do{ printf("Zadejte svuj PIN:\n");
        scanf("%d", &pin);
        pokusy--;
        countOfChar = 0;
        while (getchar() != '\n'){
            countOfChar++;
        }
        if (countOfChar != 0){
            printf("Zadej cele cislo\n");
            pin = 0;
        }
        if (pin == PIN){
            printf("Spravne heslo\n");
        }
        else if (pokusy != 0){
            printf("Heslo nebylo zadano spravne\n");
            printf("Zbyvaji vam %d pokusy.\n", pokusy);
        }
        else{
            printf("Uz nemate zadne pokusy");
        }
    } while (pin != PIN && pokusy != 0);
    return 0;
}