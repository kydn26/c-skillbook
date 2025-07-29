#include <stdio.h>

int main(void) {
    double sum = 0.0;
    double grade = 0.0;
    int grade_count = 0;
    printf("Enter a grade: ");
    scanf("%lf", &grade);
    
    while (grade != -1) {
        sum += grade;
        grade_count++;

        printf("Enter a grade: ");
        scanf("%lf", &grade);
    }

    printf("Average grade: %.2lf\n", sum / grade_count);
    return 0;
}