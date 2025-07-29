#include <stdio.h>
#define SIZE 7

int main(void) {
    int arr[SIZE];
    int has_good_neighbours = 0;
    for(int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < SIZE - 1; i++) {
        if (arr[i - 1] * arr[i + 1] == arr[i]) {
            has_good_neighbours = 1;
        }
    }

    if (has_good_neighbours) {
        printf("The array has 'good neighbours'.\n");
    } else {
        printf("The array does not have 'good neighbours'.\n");
    }
    return 0;
}