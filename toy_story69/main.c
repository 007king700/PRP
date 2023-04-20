#include <stdio.h>
#include <stdlib.h>

int main() {
    int cislicko;
    int pismenka;
    do {
        printf("Napiste mi cele cislo a ja vam reknu jestli je kladne, nebo zaporne. Vy to totiz urcite nezvladnete.\n");
        scanf("%d", &cislicko);
        pismenka = 0;
        while (getchar() != '\n') {
            pismenka++;
        }
        if (pismenka != 0) {
            printf("Napis cele cislo!!!\n");
        } else if (cislicko == 0) {
            printf("Ahoj.\n");
        } else if (abs(cislicko) % 2 == 1) {
            printf("Cislo je liche.\n");
        } else {
            printf("Cislo je sude.\n");
        }
    } while (cislicko != 0);
    return 0;
}
