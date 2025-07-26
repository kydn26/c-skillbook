#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1, d;
    int n;
    printf("Enter a1: ");
    scanf("%f", &a1);
    printf("Enter difference: ");
    scanf("%f", &d);
    printf("Enter the number of the element to calculate: ");
    scanf("%d", &n);

    printf("The nth element of the arithmetic sequence: %f.\n", (a1 + (n - 1) * d));
}