#include <stdio.h>
#define PI 3.14159265359
float polomer(){
    int countOfChar;
    float radius;
    printf("Enter radius:\n");
    do{
        scanf("%f", &radius);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || radius <= 0) {
            printf("Enter whole positive number:\n");
        }
    } while (countOfChar != 0 || radius <= 0);
    return radius;
}

int option(){
    int countOfChar;
    int choice;
    printf("Enter option:\n");
    do{
        scanf("%d", &choice);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0 || choice < 1 || choice > 5) {
            printf("Enter 1, 2, 3 or 4:\n");
        }
    } while (countOfChar != 0 || choice < 1 || choice > 5);
    return choice;
};

int main() {
    int input;
    float radius;
    do{
        printf("MENU\n");
        printf("Press 1 for circumference of circle\n");
        printf("Press 2 for area of circle\n");
        printf("Press 3 for volume of sphere\n");
        printf("Press 4 for surface of sphere\n");
        printf("Press 5 to terminate program\n");
        input = option();
        switch (input) {
            case 1:
                radius = polomer();
                printf("Circumference of this circle is %.2f", 2 * PI * radius);
                break;
            case 2:
                radius = polomer();
                printf("Area of this circle is %.2f", PI * radius * radius);
                break;
            case 3:
                radius = polomer();
                printf("Volume of this circle is %.2f", 4.0 / 3.0 * radius * PI * radius * radius);
                break;
            case 4:
                radius = polomer();
                printf("Surface of this circle is %.2f", 4 * PI * radius * radius);
                break;
        }
    }while (input != 5);
    return 0;
}