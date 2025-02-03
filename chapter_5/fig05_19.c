// Fig 5.19: fig05_19.c
// Recursive fibonacci function

#include <stdio.h>

unsigned long long int fibonacci(unsigned int n); // function prototype

int main(void) {
    unsigned int number; // number input by user

    printf("%s", "Enter an integer: ");
    scanf("%u", &number);

    // calculate fibonacci value for number input by user
    unsigned long long int result = fibonacci(number);

    // display result
    printf("Fibonacci(%u) = %llu\n", number, result);
}

// recursive fibonacci function
unsigned long long int fibonacci(unsigned int n) {
    if (0 == n || 1 == n) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

