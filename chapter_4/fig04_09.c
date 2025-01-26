// Fig 4.9: fig04_09.c
// do..while statement

#include <stdio.h>

int main (void) {
    unsigned int counter = 1; // initialize to 1

    do {
        printf("%u\n", counter);
    } while (++counter <= 10);
} // end
