#include <stdio.h>

int main(void) {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("The integer part is %d.\n", (int)number);
    printf("The decimal part is %f.\n", number - (int)number);
    printf("The number is %f.\n", number);
    return 0;
}