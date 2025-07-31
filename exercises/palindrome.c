#include <stdio.h>
#define SIZE 8

int main(void) {
    int is_palindrome = 1;
    int arr[SIZE] = {1, 3, 5, 1, 1, 5, 3, 1};
    for (int i = 0; i < SIZE/2; i++) {
        if (arr[i] != arr[SIZE - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
}