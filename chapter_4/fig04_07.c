// Fig 4.7: fig04_07.c
// Counting letter grades with switch

#include <stdio.h>

int main (void) {
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF Character to end input.");
    
    int grade;

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) {
        
        // determine which grade was input
        switch (grade) { // switch nested in while
            case 'A': // grade was uppercase A
            case 'a': // or a lowercase a
                ++aCount;
                break; // necessary to exit switch

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default: // catch all other characters
                printf("%s", "Incorrect letter grade entered.");
                puts("Enter a new grade");
                break; // optional; will exit switch anyway
                }
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}
