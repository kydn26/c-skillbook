#include <stdio.h>
#define SIZE 5

int main(void) {
    int numbers[SIZE] = {2, 1, 2, 7, 10};
    int unique_count = 0;

    for (int i = 0; i < SIZE; i++) {
        int is_unique = 1;
        for (int j = 0; j < SIZE; j++) {
            if (numbers[i] == numbers[j] && i != j) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_count++;
        }
    }

    printf("The array has %d unique elements.\n", unique_count);

    return 0;
}