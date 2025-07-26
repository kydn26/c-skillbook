#include <stdio.h>

int main(void) {
    double salary;
    int hours;
    double total_monthly_salary;
    printf("Enter your salary: \n");
    scanf("%lf", &salary);
    printf("Enter the number of hours worked: \n");
    scanf("%d", &hours);
    total_monthly_salary = salary * hours;
    printf("Your total monthly salary is: %.2lf\n", total_monthly_salary);
    return 0;
}