// Fig. 5.18: fig05_18.c
// Recursive factorial function

#include <stdio.h>

unsigned long long int factorial(unsigned int number); // function prototype

int main(void) {
    // during each iteration, calculate
    // factorial() and display result
    for (unsigned int i = 0; i <= 21; ++i) {
        printf("%u! = %llu\n", i, factorial(i));
    }
}

// recursive definition of function factorial
unsigned long long int factorial(unsigned int number) {
    // base case
    if (number <= 1) {
        return 1;
    }
    else {
        return (number * factorial(number - 1)); // calling itself here
    }
}

