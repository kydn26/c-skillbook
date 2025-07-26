#include <stdio.h>

int main(void) {
    float distance = 300.0;
    float speed = 60.0;
    float time = distance / speed;
    printf("Driving %.2f km at %.2f km/h takes %.2f hours.\n", distance, speed, time);
    return 0;
}