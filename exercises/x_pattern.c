#include <stdio.h>

int main(void) {
    int w = 7;
    int h = 7;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if(j == 0 + i || j == h - 1 - i) {
                printf("*");
            } else {
                printf("\x20");
            }
        }
        printf("\n");
    }
    return 0;
}