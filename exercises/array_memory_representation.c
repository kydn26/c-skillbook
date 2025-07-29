#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Address of first element: %p\n", &arr[0]);
    printf("Address of last element: %p\n", &arr[4]);
    printf("Address of second element: %p\n", &arr[1]);
    printf("Address of third element: %p\n", &arr[2]);
    printf("Address of fourth element: %p\n", &arr[3]);
    return 0;
}