#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int pocetSekund;
    int hodina;
    int minuta;
    printf("How many seconds you want to convert? \n");
    scanf("%d",&pocetSekund);
    hodina( pocetSekund % 60);
    printf(str(hodina));
    

    return (EXIT_SUCCESS);
}

