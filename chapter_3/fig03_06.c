/* Problem Statement:
 * A class of ten students took a quiz. The grades (integers in the range 0 to 100)
 * for this quiz are available to you. Determine the class average of the quiz */

/* Pseudocode:
 * Set total to zero
 * Set counter to zero
 *
 * while grade counter is less than or equal to ten
 *  input the next grade
 *  add the grade into the total
 *  add one to the grade counter
 * Set the class average to the total divided by ten
 * Print the class average */

#include <stdio.h>

// function main begins the program execution
int main ( void ) {
    unsigned int counter; // number of grade to be entered next
    int grade; // grade value
    int total; // sum of grades entered by user
    int average; // average of grades

    // initialization phase
    total = 0;
    counter = 1;

    // processing phase
    while ( counter <= 10 ) {
        printf( "%s", "Enter grade: " ); // prompt for input
        scanf( "%d", &grade ); // read the grade from user
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter
        } // end while

    // termination phase
    average = total / 10; // integer division

    printf( "Class average is %d\n", average ); // display result
} // end main function
