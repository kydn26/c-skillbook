#include <stdio.h>

int main(void) {
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 15; i <= number; i=i+15) {
        if (i % 15 == 0) {
            sum += i;
        } 
    }
    printf("The sum of the numbers divisible by 3 and 5 until %d is %d.\n", number, sum);
    return 0;
}