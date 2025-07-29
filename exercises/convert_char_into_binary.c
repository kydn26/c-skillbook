#include <stdio.h>
#include <ctype.h>

int main() {
    char hex;
    int decimal;

    printf("Enter a 1-digit hexadecimal value (0-9, A-F): ");
    scanf(" %c", &hex); // The space before %c skips whitespace

    // Convert to uppercase to handle both 'a' and 'A'
    hex = toupper(hex);

    // Convert hex character to decimal value
    if (hex >= '0' && hex <= '9') {
        decimal = hex - '0';
    } else if (hex >= 'A' && hex <= 'F') {
        decimal = 10 + (hex - 'A');
    } else {
        printf("Invalid hexadecimal input.\n");
        return 1;
    }

    // Print binary representation
    printf("Binary representation of '%c': ", hex);
    for (int i = 3; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");

    return 0;
}
