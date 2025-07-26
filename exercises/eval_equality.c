#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");
    return 0;
}