// Fig 6.7: fig06_07.c
// Analyzing a student poll

#include <stdio.h>

#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

int main(void) {
    // initialize frequency counters to 0 
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {
        1, 2, 6, 7, 8,  // Initial values
        3, 4, 5, 9, 10, // Continuing with values between 1 and 10
        2, 7, 1, 10, 4, // Random values between 1 and 10
        6, 3, 8, 5, 9,  // Random values between 1 and 10
        1, 2, 7, 4, 10, // Random values between 1 and 10
        5, 6, 3, 8, 9,  // Random values between 1 and 10
        2, 1, 7, 10, 4, // Random values between 1 and 10
        6, 3, 8, 5, 9   // Random values between 1 and 10
    };

    // for each answer, select value of an element of array responses
    // and use that value as an index in array frequency to
    // determine element to increment

    for (size_t answer = 2; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%17s\n", "RATING", "FREQUENCY");

    // output the frequencies in a tabular format
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6zu%17d\n", rating, frequency[rating]);
    }
}


