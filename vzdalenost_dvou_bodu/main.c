#include <stdio.h>
#include <math.h>

int main() {
    float Ax;
    float Ay;
    float Bx;
    float By;
    double odvesna_x;
    double odvesna_y;
    double prepona;
    int countOfChar;
    printf("Budete zadavat souradnice x a y dvou bodu A a B a ja vam vypoctu jejich vzdalenost.\n Nejdrive zadejte x a pote y bodu A:\n");
    do {
        printf("x:\n");
        scanf("%f", &Ax);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("y:\n");
        scanf("%f", &Ay);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    printf("Ted zadejte x a pote y bodu B.\n");
    do {
        printf("x:\n");
        scanf("%f", &Bx);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    do {
        printf("y:\n");
        scanf("%f", &By);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Zadejte cislo.\n");
        } else {
            break;
        }
    } while (countOfChar != -10);
    odvesna_x = Ax - Bx;
    odvesna_y = Ay - By;
    if (odvesna_x == odvesna_y) {
        if (odvesna_x == 0) {
            printf("Vzdyt ty body jsou stejne.\n");
        } else if (Ax - Ay == 0) {
            if (Bx - By == 0) {
                printf("Vzdyt ty body jsou stejne.\n");
            }
        } else {
            prepona = sqrt((odvesna_x * odvesna_x) + (odvesna_y * odvesna_y));
            printf("Vzdalenost bodu A a B je: %f\n", prepona);
        }
    } else if (odvesna_x == 0) {
        printf("Vzdalenost bodu A a B je: %f\n", odvesna_y);
    } else if (odvesna_y == 0) {
        printf("Vzdalenost bodu A a B je: %f\n", odvesna_x);
    } else {
        prepona = sqrt((odvesna_x * odvesna_x) + (odvesna_y * odvesna_y));
        printf("Vzdalenost bodu A a B je: %f\n", prepona);
    }
}
