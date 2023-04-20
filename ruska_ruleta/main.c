#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char order[10];
    int player;
    int chamber;
    srand((unsigned) time(NULL));
    chamber = rand() % 6 + 1;
    printf("The bullet has been placed in random spot in the revolver barrel.\n Type 'shoot' to shoot the gun:\n");
    player = rand() % 6 + 1;
    //printf("Chamber = %d, player = %d\n", chamber, player);
    do {
        scanf("%s", order);
        if (strcmp(order, "shoot") == 0) {
            if (chamber == player) {
                printf("Well you died.\n");
                break;
            } else {
                printf("You have shot the gun and survived.\n Type 'shoot' to shoot the gun again:\n");
                if (player < 6) {
                    player++;
                    //printf("Chamber = %d, player = %d\n", chamber, player);
                } else {
                    player = 1;
                    //printf("Chamber = %d, player = %d\n", chamber, player);
                }
            }
        }
    } while (player != 0);
}

