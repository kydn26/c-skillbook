#include <stdio.h>

int main(void) {
    int number;
    int current_number;
    int sum = 0;
    printf("Enter size: ");
    scanf("%d", &number);
    while(number > 0) {
        printf("Enter value: ");
        scanf("%d", &current_number);
        if (current_number % 2 == 1) {
            sum += current_number;
        }
        number--;
    }
    printf("The sum of odd numbers is %d.\n", sum);
    return 0;
}