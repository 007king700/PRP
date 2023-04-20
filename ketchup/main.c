#include <stdio.h>

int main() {
    int pismenka;
    int number;
    do {
        printf("What grade you had last year?:\n");
        scanf("%d",&number);
        /** Musíme zkontrolovat vstupně výstupní buffer. Pokud uživatel nezadá celé číslo,
         *  znaky jsou uloženy ve v/v bufferu. V tomto případě funkce scanf nepozastaví
         *  konzoli a uživatel nemá možnost zadat další známku. Způsobí to nekonečný cyklus.
         *  funkce getchar() přečte znak ze v/v bufferu a zároveň ho vymaže. */
        pismenka = 0; /** pismenka se nastavi na 0. */
        while(getchar()!='\n'){
            /** Pokud se najde nějaké písmeno, přičte se k pismenka 1 */
            pismenka++;
        }
        if (pismenka != 0){
            printf("You havent wrote grade, you were that bad that you cannot write a single number?\n",number);
            break;
        }
        else if (number == 1){
            printf("If you had this grade then good job.\n", number);
            printf("Now get out nerd.\n");
        }
        else if (number < 0){
            printf("This -> %d <- is not grade, you were that bad that you cannot write a single number?\n",number);
            break;
        }
        else if (number == 0){
            printf("This -> %d <- is not grade, you were that bad that you cannot write a single number?\n",number);
            break;
        }
        else if (number < 5){
            printf("Your grade could be better.\n",number);
        }
        else if (number == 5){
            printf("That is just bad, you should work on yourself.\n",number);
        }
        else if (number == 69){
            printf("NICE\n",number);
        }
        else {
            printf("This -> %d <- is not grade, you were that bad that you cannot write a single number?\n",number);
            break;
        }
    } while (number != 69);
    return 0;
}