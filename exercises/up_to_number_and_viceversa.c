#include <stdio.h>

int main(void) {
    int number, count = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(count <= number) {
        printf("%d ", count);
        count++;
    }
    printf("\n");
    while(number > 0) {
        printf("%d ", number);
        number--;
    }
    printf("\n");
    return 0;
}