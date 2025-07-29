#include <stdio.h>

int main(void) {
    int n, exponent, result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while(exponent > 0) {
        result *= n;
        exponent--;
    }
    printf("Result: %d\n", result);
    return 0;
}