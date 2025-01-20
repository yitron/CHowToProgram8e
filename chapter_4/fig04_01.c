// Fig 4.1: fig04_01.c
// Counter controlled iteration

#include <stdio.h> // preprocessor directive

int main (void) {
    unsigned int counter = 1; // initialize counter as positive int

    while (counter <= 10) {
        printf("%u\n", counter);
        ++counter; // increment
    }
} // end while
