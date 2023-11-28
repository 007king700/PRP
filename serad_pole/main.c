#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MIN 1
#define MAX 99
#define SIZE 10000

int main() {
    srand(time(NULL));
    int pole[SIZE], pocet[MAX],temp,poradi[MAX];
    for(int i=0; i < MAX; i++){
        pocet[i]=0;
    }
    for(int i=0; i < SIZE; i++){
        pole[i] = rand() % MAX + MIN;
        for(int x=1; x<=MAX;x++){
            if (x == pole[i]){
                pocet[x-1]++;
            }
        }
    }
    printf("\n");
    for(int i = 0; i<MAX;i++){
        poradi[i]=i+1;
    }
    for(int i=0; i < MAX; i++){
        printf("[%d] - %d; ",poradi[i],pocet[i]);
    }
    for (int i = 0; i < MAX; ++i)
    {
        for (int j = i + 1; j < MAX; ++j)
        {
            if (pocet[i] < pocet[j])
            {
                temp = pocet[i];
                pocet[i] = pocet[j];
                pocet[j] = temp;
                temp = poradi[i];
                poradi[i] = poradi[j];
                poradi[j] = temp;
            }
        }
    }
    printf("\nSTART\n");
    for(int i=0; i < MAX; i++){
        printf("[%d] - %d; ",poradi[i],pocet[i]);
    }
    return 0;
}
