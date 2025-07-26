#include <stdio.h>

int main(void) {
    // e.g. 123
    int number, units, tens, hundreds;
    printf("Enter a number of three digits: ");
    if (scanf("%d", &number) != 1 || number < 100 || number > 999) {
        printf("Invalid input.\n");
        return 1;
    }
    
    hundreds = number / 100;
    tens = (number % 100) / 10;
    units = number % 10;
    printf("The sum of the digits of %d is %d.\n", number, hundreds + tens + units);
    return 0;
}