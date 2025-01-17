/* Problem Statement
 * Computer Science instructor bonus calculator
 */

/* Pseudocode
 * Analyze exam results for 10 students and decide whether the instructor receives a bonus
 *
 * Initialize variables
 * Input the ten quiz variables and count passes and failures
 * Print a summary of exam results
 * Decide whether instructor receives a bonus (condition passes >=8)
 *
 * Initialize variables
 * Initialize counter passes to zero
 * Initialize counter failures to zero
 * Initialize student to one
 *
 * Input the ten quiz grades and count passes and failures
 * While student counter is less than or equal to ten
 *  Input the next exam result
 *
 *  If the student passes
 *      Add one to passes
 *  else
 *      Add one to failtures
 *  Add one to student counter
 *
 *  Print a summary of the exam results
 *  Print number of passes
 *  Print number of failures
 *
 *  Instructor bonus decision
 *  If number passes more than eight
 *      Print "Bonus to instructor!"
 */

#include <stdio.h>

// function main begins program execution

int main (void) {
    // initialize variables
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    // processing phase
    while (student <= 10) {

        printf("%s", "Enter result (pass=1, fail=2): ");
        scanf("%d", &result);

        if (result == 1) {
            passes +=  1;
        }
        else {
            failures += 1;
        }

        student += 1;

        // termination phase
        printf("Passes %u\n", passes);
        printf("Failed %u\n", failures);

        if (passes > 8) {
            printf("%s", "God blessed you!");
        }
        else {
            printf("%s", "Work more abundantly!");
        }
    } // end if
} // end main

