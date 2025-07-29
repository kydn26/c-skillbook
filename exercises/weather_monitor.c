#include <stdio.h>
#define SIZE 7

int main() {
    int numbers[SIZE];
    int i, max_value = 0, min_value = 0;
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
       printf("Enter day %d temperature: ", i + 1);
       scanf("%d", &numbers[i]);
    }

    max_value = numbers[0];
    min_value = numbers[0];

    for (i = 1; i < SIZE; i++) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        sum += numbers[i];
    }

    printf("Average: %.2lf\n", (double) sum / SIZE);
    printf("The hottest temperature is %d.\n", max_value);
    printf("The coldest temperature is %d.\n", min_value);
    return 0;
    
}