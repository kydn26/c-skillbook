#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if ( number > 9 && number < 100) {
        printf("double-digit.\n");
    } else if (number > 99 && number < 1000) {
        printf("triple-digit.\n");
    } else {
        printf("neither double/triple.\n");
    }
}