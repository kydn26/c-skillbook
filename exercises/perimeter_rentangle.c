#include <stdio.h>

int main(void) {
    float width;
    float height;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("The perimeter of the rectangle is %.2f.\n", 2 * (width + height));
    return 0;
}