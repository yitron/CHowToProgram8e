// Fig 5.12: fig05_12.c
// Rolling a six-sided die 60k times

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7


int main(void) {
    unsigned int frequency[SIZE] = {0};

    srand(time(NULL)); // seed random number

    for (unsigned int roll = 1; roll <= 60000000; ++roll) {
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }

    printf("%s%17s\n", "FACE", "FREQUENCY");

    for (size_t face = 1; face < SIZE; ++face) {
        printf("%4zu%17d\n", face, frequency[face]);
    }
}


