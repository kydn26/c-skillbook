#include <stdio.h>

int main(void) {
    int number;
    int limit = 10;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}