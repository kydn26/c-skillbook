#include <stdio.h>
#define SIZE 7

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}