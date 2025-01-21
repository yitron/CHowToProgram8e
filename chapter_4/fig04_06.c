// Fig 4.6: fig04_06.c
// Compound interest calculation with for loop

/* Problem Statement
 *
 * A person invests $1000.00 in a savings account yielding
 * 5% interests. Assuming that all interests is left in the account,
 * calculate and print the amount of money in the account
 * at the end of each year for 10 years.
 *
 * a = p(1 + r)^n
 *
 * where
 * p is the principle
 * r is the annual interest rate
 * n is the number of years
 * a is the amount on deposit and the end of nth year
 *
 */

/* Pseudocode
 *
 * Initialize variables
 * Calculate amount of money after nth year
 *
 * Initialize variables
 * set principle to double 1000
 * set interest rate to double 0.05
 * set n to unsigned 10
 * set a to double
 *
 * Calculate amount of money for each of the tenth year
 *  for n = 1 and year not exceeding 10
 *  calculate the amount after each year
 * Print amount left after nth year
 */

#include <stdio.h>
#include <math.h>

int main (void) {
    double principle = 1000.0;
    double interest = 0.05;

    printf("%4s%21s\n", "Year", "Amount on deposit");

    // Calculate amount of money for each of 10 years
    for (unsigned int year = 1; year <= 10; ++year) {

        double amount = principle * pow(1.0 + interest, year);

        printf("%4u%21.2f\n", year, amount);
    }
}
