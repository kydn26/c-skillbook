#include <stdio.h>
#define SIZE 6

int main(void) {
    int numbers[SIZE] = {2, 2, 2, 2, 2, 2};

    int counted[SIZE] = {0};
    int non_unique_count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (counted[i]) {
            continue;
        }

        int is_non_unique = 0;
        for (int j = i + 1; j < SIZE; j++) {
            if (numbers[i] == numbers[j]) {
                is_non_unique = 1;
                counted[j] = 1;
            }
        }

        if (is_non_unique) {
            non_unique_count++;
        }
    }

    printf("The array has %d non-unique elements.\n", non_unique_count);

    return 0;
}