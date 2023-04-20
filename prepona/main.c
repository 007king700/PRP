#include <stdio.h>
#include <math.h>

int main() {
    float odvesna_1;
    float odvesna_2;
    float prepona;
    float obsah;
    int countOfChar;
    do {
        printf("Zadejte delku prvni odvesny v cm.\n");
        scanf("%f", &odvesna_1);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || odvesna_1 <= 0) {
            printf("Zadejte kladne cislo.\n");
        }
    } while (odvesna_1 <= 0);

    do {
        printf("Zadejte delku druhe odvesny v cm.\n");
        scanf("%f", &odvesna_2);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || odvesna_2 <= 0) {
            printf("Zadejte kladne cislo.\n");
        }
    } while (odvesna_2 <= 0);

    float nadruhou_1 = odvesna_1 * odvesna_1;
    float nadruhou_2 = odvesna_2 * odvesna_2;
    prepona = sqrt(nadruhou_1 + nadruhou_2);
    printf("Prepona je dlouha %f cm.\n", prepona);
    obsah = odvesna_1 * odvesna_2;
    printf("Obsah tohoto trojuhelniku je %f cm^2\n", obsah);
    return 0;
}
