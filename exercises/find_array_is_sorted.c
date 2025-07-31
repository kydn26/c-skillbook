#include <stdio.h>
#define SIZE 5

int main(void) {
    int numbers[SIZE] = {1, 2, 3, 7, 10};
    // int numbers[SIZE] = {10, 7, 3, 2, 1};
    int ascending_count = 0;
    int descending_count = 0;
    int equal_count = 0;
    
    for (int i = 0; i < SIZE - 1; i++) {
        if (numbers[i + 1] > numbers[i]) {
            ascending_count++;
        } else if (numbers[i + 1] < numbers[i]) {
            descending_count++;
        }
        if (numbers[i + 1] == numbers[i]) {
            equal_count++;
        }
    }

    if ((ascending_count == SIZE - 1) || (descending_count == SIZE - 1)) {
        printf("Really Sorted.\n");
    } else if ((ascending_count + equal_count == SIZE - 1) || (descending_count + equal_count == SIZE - 1)) {
        printf("Sorted.\n");
    } else {
        printf("Not Sorted.\n");
    }
    return 0;
}