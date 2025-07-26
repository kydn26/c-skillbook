
#include <stdio.h>

int main() {
    float a1, an;
    int n;
    printf("Enter a1: ");
    scanf("%f", &a1);
    printf("Enter an: ");
    scanf("%f", &an);
    printf("Enter the number of the element to calculate: ");
    scanf("%d", &n);

    printf("The sum of the arithmetic sequence: %f.\n", (an - a1) * n / 2);
    return 0;
}