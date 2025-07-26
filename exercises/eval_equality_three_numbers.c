#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    return 0;
}