#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 6;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i + 1 == b) {
                printf("*\x20");
                continue;
            }
            if (j == 0 || j + 1 == a) {
                printf("*\x20");
            } else {
                printf("\x20\x20");
            }
        }
        printf("\n");
    }
    return 0;
}