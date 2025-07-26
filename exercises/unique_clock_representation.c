#include <stdio.h>

int main() {
    int total_seconds = 4000;
    int seconds;
    int minutes;
    int hours;
    printf("Enter the number of seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    seconds = total_seconds % 60;
    minutes = total_seconds / 60;
    hours = minutes / 60;
    minutes = minutes % 60;

    if (hours < 10) {
        printf("0%d", hours);
    } else {
        printf("%d", hours);
    }

    if (minutes < 10) {
        printf(":0%d", minutes);
    } else {
        printf(":%d", minutes);
    }

    if (seconds < 10) {
        printf(":0%d\n", seconds);
    } else {
        printf(":%d\n", seconds);
    }


    return 0;
}