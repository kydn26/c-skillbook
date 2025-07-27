#include <stdio.h>

int main(void) {
    int number;
    int binary_value = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int factor = 1;
    int temp = number;
    while (temp > 0) {
        binary_value += (temp % 2) * factor;
        temp /= 2;
        factor *= 10;
    }
    printf("The binary value of %d is %d.\n", number, binary_value);
    return 0;
}