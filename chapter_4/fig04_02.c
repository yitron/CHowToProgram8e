// Fig 4.2: fig04_02.c
// Counter-controlled iteration with the for statement

#include <stdio.h>

int main (void) {
    // initialization, iteration condition, and increment
    // are all included in the for statement header.
    for (unsigned int counter = 305; counter <= 340; counter += 5) {
        printf("%u\n", counter);
    }
}
