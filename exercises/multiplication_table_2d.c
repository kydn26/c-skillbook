#include <stdio.h>
#define SIZE 11

int main(void) {
    int results[SIZE][SIZE];
    for(int i = 1; i < SIZE; i++) {
        for(int j = 1; j < SIZE; j++) {
            results[i][j] = i * j;
        }
    }

    for(int i = 1; i < SIZE; i++) {
        for(int j = 1; j < SIZE; j++) {
            printf("%5d", results[i][j]);
        }
        printf("\n");
    }
}