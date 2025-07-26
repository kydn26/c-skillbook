#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The absolute value of %d is %d.\n", number, number < 0 ? -number : number);
    return 0;
}