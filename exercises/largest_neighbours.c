#include <stdio.h>
#define SIZE 5

int main(void) {
    int numbers[SIZE] = {1, 4, 3, 7, 1};
    // int numbers[SIZE] = {5, 7, 1, 5, 2};
    int max_sum = 0;
    for (int i = 0; i < SIZE - 1; i++) {
        if (numbers[i] + numbers[i + 1] > max_sum) {
            max_sum = numbers[i] + numbers[i + 1];
        }
    }
    printf("The largest sum of two adjacent numbers is %d.\n", max_sum);
    return 0;
}