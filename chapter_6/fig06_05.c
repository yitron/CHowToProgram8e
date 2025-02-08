// Fig 6.5: fig06_05.c
// Initializing the elements of an array s to the even integer from 2 to 10

#include <stdio.h>
#define SIZE 5 // maximum size of an array

int main(void) {

    // symbolic constant SIZE can be used to specify array size
    int s[SIZE]; // array s has SIZE elements

    for (size_t j = 0; j < SIZE; ++j) {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    for (size_t j = 0; j < SIZE; ++j) {
        printf("%7zu%13d\n", j, s[j]);
    }
}


