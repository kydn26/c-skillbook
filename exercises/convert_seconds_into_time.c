#include <stdio.h>

int main(void) {
    // e.g. 4000 seconds
    // 1 minute = 60 seconds
    // 1 hour = 60 minutes
    int total_seconds = 4000;
    int seconds;
    int minutes;
    int hours;
    printf("Enter the number of seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    seconds = total_seconds % 60; // 4000 % 60 = 40
    minutes = total_seconds / 60; // 4000 / 60 = 66
    hours = minutes / 60; // 66 / 60 = 1
    minutes = minutes % 60; // 66 % 60 = 6
    printf("%d seconds are %d hours, %d minutes, and %d seconds.\n", total_seconds, hours, minutes, seconds);
    return 0;
}