#include <stdio.h>

int main(void) {
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 3; i <= number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        } 
    }
    printf("The sum of the numbers divisible by 3 or 5 until %d is %d.\n", number, sum);
    return 0;
}