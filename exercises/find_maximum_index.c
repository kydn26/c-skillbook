#include <stdio.h>
#define SIZE 9

int main() {
    int numbers[SIZE];
    int i, max_index = 0;
    for (int i = 0; i < SIZE; i++)
    {
       printf("Enter a number: ");
       scanf("%d", &numbers[i]);
    }

    for (i = 1; i < SIZE; i++) {
        if (numbers[i] > numbers[max_index]) {
            max_index = i;
        }
    }

    printf("The maximum number is %d at index %d.\n", numbers[max_index], max_index);
    return 0;
    
}