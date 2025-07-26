#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a x and y coordinate: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) is in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) is in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) is in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) is in the fourth quadrant.\n", x, y);
    } else {
        printf("The point (%d, %d) is at the origin or on the axis.\n", x, y);
    }
    return 0;
}