#include <stdio.h>

int main(void) {
    int age;
    int currentYear;
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    printf("Enter you age: ");
    scanf("%d", &age);
    printf("Your year of birth was %d.\n", (currentYear - age));
    return 0;
}