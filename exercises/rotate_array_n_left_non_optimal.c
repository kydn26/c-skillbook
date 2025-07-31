#include <stdio.h>
#define SIZE 7
#define N 2

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < N; i++)
    {
        int temp = arr[0];
        for (int i = 1; i < SIZE; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[SIZE - 1] = temp;
    }
    printf("Rotated array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}