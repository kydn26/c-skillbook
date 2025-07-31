#include <stdio.h>
#define SIZE 7
#define N 2

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < N; i++)
    {
        int temp = arr[SIZE - 1];
        for (int j = SIZE - 1; j > 0; j--)
        {
            arr[j] = arr[j- 1];
        }
        arr[0] = temp;
    }
    printf("Rotated array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}