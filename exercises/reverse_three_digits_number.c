#include <stdio.h>

int main(void) {
    int number, units, tens, hundreds, reversed_number;
    printf("Enter a number of three digits: ");
    if (scanf("%d", &number) != 1 || number < 100 || number > 999) {
        printf("Invalid input.\n");
        return 1;
    }

    hundreds = number / 100;
    tens = (number % 100) / 10;
    units = number % 10;

    reversed_number = units * 100 + tens * 10 + hundreds;

    printf("The reversed number of %d is %d.\n", number, reversed_number);
    return 0;
}