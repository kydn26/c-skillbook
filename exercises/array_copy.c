#include <stdio.h>
#define DATE_SIZE 3

int main(void) {
    int date[DATE_SIZE];
    int copied_date[DATE_SIZE];
    printf("Enter date as day, month, and year: ");
    scanf("%d %d %d", &date[0], &date[1], &date[2]);

    for (int i = 0; i < DATE_SIZE; i++)
    {
        copied_date[i] = date[i];
    }
    printf("Original date is %d/%d/%d.\n", date[0], date[1], date[2]);
    printf("Copied date is %d/%d/%d.\n", copied_date[0], copied_date[1], copied_date[2]);
    return 0;
}