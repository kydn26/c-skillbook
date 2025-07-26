#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (j <= i) {
                printf("%d", (j+1));
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}