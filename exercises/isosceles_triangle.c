#include <stdio.h>

int main(void) {
    int n = 15;
	for (int i = 0; i < 1 + (n / 2); i++) {
        for (int j = 0; j < n; j++) {
            if (i + 1 + (n / 2) > j && j > (n / 2) - 1 - i) {
                printf("*\x20");
            } else {
                printf("\x20\x20");
            }
        }
        printf("\n");
    }
    return 0;
}