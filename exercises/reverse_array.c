#include <stdio.h>
#define SIZE 7

int main(void) {
    int arr[SIZE];
    int has_good_neighbours = 0;
    for(int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}