#include <stdio.h>
#include <stdlib.h>

#define POCET 128
#define SLOUPCE 10
int main(int argc, char** argv) {
    int pocet=0;
    for(int i=33; i<POCET; i++){
        printf("%5d %c",i,i);
        pocet++;
        if (pocet % SLOUPCE == 0){
            printf("\n");
        }
}
    printf("\n");
    return (EXIT_SUCCESS);
}