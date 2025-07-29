#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter a number of rows: ");
    scanf("%d", &rows);

    int count = 1;

    for (int i = 0; i < rows; i++) {
        for(int j = 0; j <= rows + i; j++) {
            if (j >= rows - i && i % 2 == j % 2) {
                printf("%2d", count);
                count++;
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}