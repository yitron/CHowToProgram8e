// Exercise 2.16
/* Write a program that asks the user to enter two nnumbers, obtains them from the user and prints their
 * sum, product, difference, quotient, and remainder.
 */

#include <stdio.h>

int main (void) {

    // Initialize variables
    unsigned int number1, number2;
    unsigned int sum;
    unsigned int product;
    unsigned int difference;
    unsigned int quotient;
    unsigned int remainder;

    // Input numbers
    printf("%s", "Please enter two numbers: ");
    scanf("%u%u", &number1, &number2);

    // Process calculations
    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("%u\n%u\n%u\n%u\n%u", sum, product, difference, quotient, remainder);
}



