#include <stdio.h>

int main(void) {
    double a;
    double b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Before swapping: a = %lf, b = %lf.\n", a, b);
    double temp=a;
    a = b;
    b = temp;
    printf("After swapping: a = %lf, b = %lf.\n", a, b);
}