/* Problem Statement
 * Develop a class averaging program that will process a
 * arbitrary number of grades each time the program runs */

/* Pseudocode
 * Sequence Structure
 * Initialize variables
 * Input, sum and count the quiz grades
 * Calculate and print the class average
 *
 * Initialize variables
 * Initialize total to zero
 * Initialize counter to zero
 *
 * Input, sum and count the quiz grades
 * while the user has not yet entered the sentinel
 *  Add this grade into the running total
 *  Add one to the grade counter
 *  Input the next grade (possibly the sentinel)
 *
 *  Calculate and print the class average
 * if the counter is not equal to zero
 *  Set the average to the total divided by the counter
 *  Print the average
 *
 * else
 *  Print "No grades entered" */

#include <stdio.h> // pre processor directive

// function main begins the program execution
int main (void) {
    unsigned int counter;
    int grade;
    int total;

    float average;

    // initialization phase
    total = 0;
    counter = 0;

    // processing phase
    // get first grade from user
    printf("%s", "Enter grade, -1 to end: ");
    scanf("%d", &grade);

    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade;
        counter = counter + 1;

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: ");
        scanf("%d", &grade);
    } // end while

    // termination phase
    // if user entered at least one grade
    if (counter != 0) {
        average = (float) total / counter;
        printf("Class average is %.2f\n", average);
    }
    else {
        puts("No grades were entered");
    }
}
