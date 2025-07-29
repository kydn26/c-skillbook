#include <stdio.h>

int main(void) {
    int number;
    printf("Enter n of numbers: ");
    scanf("%d", &number);
    for(int i = 0; i < number; i++) {
        printf("%d ", i * 2);
    }
    printf("\n");
    return 0;
}