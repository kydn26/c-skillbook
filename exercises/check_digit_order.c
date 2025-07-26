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
    
    if (hundreds > tens) {
        printf("NOT ASCENDING\n");
        return 0;
    }

    units = number % 10;

    if (tens > units) {
        printf("NOT ASCENDING\n");
        return 0;
    }

    printf("ASCENDING\n");
    return 0;
}