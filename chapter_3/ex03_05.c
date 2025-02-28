// Exercise 3.5: ex03_05.c
// Combine the statements that you write in Exercise 3.4 into a program that calculates
// the sum of the integers from 1 to 10. Use the while statement to loop through the calculation
// and increment statements. The loop should terminate when the value of x becomes 11.

// Problem Statement:
// Calculate the sum of integers from 1 to 10.

// Pseudocode:
// Initialize variable sum to type int
// Initialize variable x to type int
//      While x is less or equal to 10
//          add x to sum
//          increase x by 1
//      end when x becomes 11

#include <stdio.h>

int main(void) {
    unsigned int sum;
    unsigned int x;

    while (x <= 10) {
        sum += x;
        ++x;
    }

    printf("The sum of integers 1 to 10 is: %u", sum);
}

