// Fig 5.13: fig05_13.c
// Randomizing the die-rolling program

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    // loop ten times
    for (unsigned int i = 1; i <= 10; ++i) {

        printf("%10d", 1 + (rand() % 6));

        if (i % 5 == 0) {
            puts("");
        }
    }
}

