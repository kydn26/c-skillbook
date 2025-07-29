#include <stdio.h>

void minmax(int a, int b, int *min, int *max) {
    if (a < b) {
        *min = a;
        *max = b;
    } else {
        *min = b;
        *max = a;
    }
}

int main(void) {
    int a, b, min, max;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    minmax(a, b, &min, &max);
    printf("The minimum is %d and the maximum is %d.\n", min, max);
    return 0;
}