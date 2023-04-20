#include <stdio.h>

#define MIN 1
#define MAX 100

int main() {
    int number;
    int count_of_char;
    do {
        printf("Type a whole number between %d and %d: ", MIN, MAX);
        scanf("%d", &number);
        count_of_char = 0;
        while (getchar() != '\n') {
            count_of_char++;
        }
        if (count_of_char != 0) {
            printf("You haven't type a whole number. Try again.\n");
        } else if (number < MIN || number > MAX) {
            printf("The number is not between %d and %d. Try again.\n", MIN, MAX);
        }
    } while (count_of_char != 0 || number < MIN || number > MAX);
    printf("Number is OK.");
    return 0;
}