#include <stdio.h>

int main() {
    return 0;
}

double rectangle_area(double width, double height) {
    return width * height;
}

int maximum_digit(int number) {
    if (number <= 0) return 0;

    int max_digit = 0;
    while(number > 0) {
        int digit = number % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        number /= 10;
    }
    return max_digit;
}

int factorial(int number) {
    if (number < 0) return -1;
    if (number == 0 || number == 1)
        return 1;
    
    return number * factorial(number - 1);
}

int is_even(int number) {
    return number % 2 == 0;
}

int is_odd(int number) {
    return number % 2 != 0;
}

int sequence_9s(int number) {
    int value = 1;
    while(number > 0) {
        value *= 10;
        number--;
    }
    return value - 1;
}

char lower_case(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

char upper_case(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int three_digits(char c1, char c2, char c3) {
    if (c1 >= '0' && c1 <= '9' && c2 >= '0' && c2 <= '9' && c3 >= '0' && c3 <= '9') {
        return ((c1 - '0') * 100 + (c2 - '0') * 10 + (c3 - '0'));
    }
    return 0;
}

double lower_than_digit(int number, int digit) {
    int sum = 0;
    int count = 0;
    if (count == 0) return 0.0;
    while(number > 0) {
        int current_digit = number % 10;
        if (current_digit < digit) {
            sum += current_digit;
            count++;
        }
        number /= 10;
    }
    printf("The sum of digits less than %d is %d.\n", digit, sum);
    return  (double)sum / count;
}

int sum_of_divisors(int number) {
    int sum = 1;
    int divisor = 2;
    if (number == 1) return 1;
    while(divisor <= number) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }
    return sum;
}

int optimized_sum_of_divisors(int number) {
    int i;
    int sum = 1;
    if (number == 1) return 1;
    for (i = 2; i * i < number; i++) {
        if (number % i == 0) {
            sum = sum + i + (number / i);
        }
    }
    if (i * i == number) {
        sum += i;
    }
    return sum;
}

int is_perfect_number(int number) {
    int i;
    int sum = 1;
    if (number == 1) return 0;
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            if (i * i == number) {
                sum += i; // solo una vez si es raíz cuadrada
            } else {
                sum += i + (number / i);
            }
        }
    }
    return sum == number;
}