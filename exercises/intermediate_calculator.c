#include <stdio.h>

int main(void) {
    char operator;
    int number1, number2;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    switch(operator) {
        case '+':
            printf("%d %c %d = %d\n", number1, operator, number2, number1 + number2);
            break;
        case '-':
            printf("%d %c %d = %d\n", number1, operator, number2, number1 - number2);
            break;
        case '*':
            printf("%d %c %d = %d\n", number1, operator, number2, number1 * number2);
            break;
        case '/':
            printf("%d %c %d = %d\n", number1, operator, number2, number1 / number2);
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    return 0;
}