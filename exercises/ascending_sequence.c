#include <stdio.h>

int main(void) {
    int n;
    int previous_number = 0;
    printf("Enter a size: ");
    scanf("%d", &n);
    do {
        int number;
        printf("Enter a value: ");
        scanf("%d", &number);
        if (previous_number > number) {
            printf("The sequence is not ascending.\n");
            break;
        } else if (previous_number <= number && n == 1) {
            printf("The sequence is ascending.\n");
        }
        previous_number = number;
        n--;
    } while(n > 0);
    return 0;
}