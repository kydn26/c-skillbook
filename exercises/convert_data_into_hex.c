#include <stdio.h>

int main(void) {
    int day, month, year;
    printf("Enter date as day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Date in hex format: 0x%x 0x%x 0x%x\n", day, month, year);
}