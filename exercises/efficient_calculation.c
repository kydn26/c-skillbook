#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    number = number * number;
    printf("The power of 2 is %d.\n", number);
    printf("The power of 4 is %d.\n", number * number);
    printf("The power of 6 is %d.\n", number * number * number);
    printf("The power of 8 is %d.\n", number * number * number * number);
    return 0;
}