#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter a day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day == 31) {
            day = 1;
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        } else {
            day++;
        } 
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
       if (day == 30) {
            day = 1;
            month++;
       }
        else {
            day++;
        }
    } else if (month == 2) {
        if (day == ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0 ? 29 : 28)) {
            day = 1;
            month = 3;
        } else {
            day++;
        }
    }
    printf("The next day is %d/%d/%d.\n", day, month, year);
    return 0;
}