#include <stdio.h>

int main(void) {
    int grade1;
    int grade2;
    int grade3;
    double average;
    printf("Enter first grade: ");
    scanf("%d", &grade1);
    printf("Enter second grade: ");
    scanf("%d", &grade2);
    printf("Enter third grade: ");
    scanf("%d", &grade3);
    average = (grade1 + grade2 + grade3) / 3.0;
    printf("The average of the grades is %.2lf.\n", average);
}