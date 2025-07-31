#include <stdio.h>
#define SIZE 7
#define N 3

int main(void)
{
    // Three-Reverse Rotation Technique
    // Or In-place Rotation using Three Reversals
    // Reversal Algorithm for Array Rotation
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int k = N;
    for (int i = 0; i < (SIZE - k) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - k - 1 - i];
        arr[SIZE - k - 1 - i] = temp;
    }
    for (int i = SIZE - k; i < (SIZE + (SIZE - k)) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i + (SIZE - k)];
        arr[SIZE - 1 - i + (SIZE - k)] = temp;
    }
    for (int i = 0; i < SIZE / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }
    printf("Rotated array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}