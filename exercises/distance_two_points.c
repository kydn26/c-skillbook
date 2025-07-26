#include <stdio.h>
#include <math.h>

int main(void) {
    float x1, y1, x2, y2, distance;
    printf("Enter the coordinates of the first point: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%f %f", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f.\n", x1, y1, x2, y2, distance);
    return 0;
}