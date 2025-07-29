#include <stdio.h>

int main(void) {
    int number;
    int sum_even = 0, sum_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0)
            sum_even += digit;
        else
            sum_odd += digit;
        number /= 10;
    }
    printf("The sum of even digits is %d.\n", sum_even);
    printf("The sum of odd digits is %d.\n", sum_odd);
    return 0;
}