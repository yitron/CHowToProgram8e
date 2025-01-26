// Fig04_12: fig04_12.c
// Using the continue statement in a for statement

#include <stdio.h>

int main (void) {
    // loop ten times
    for (unsigned int x = 1; x <= 10; ++x) {

        // if x == 5, continue with next iteration of loop
        if (x == 5) {
            continue;
        }

        printf("%u ", x);
    }

    puts("\nUsed continue to skip printing the value of 5\n");
}


