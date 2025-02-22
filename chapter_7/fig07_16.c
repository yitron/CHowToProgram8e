// Fig 7.16: fig07_16.c
// Applying sizeof to an array name returns
// the number of bytes in the array

#include <stdio.h>

#define SIZE 20

size_t getSize(float *ptr); // function prototype

int main(void) {
    float array[SIZE]; // create array

    printf("The number of bytes in the array is %lu"
            "\nThe number of bytes returned by getSize is %zu\n",
            sizeof(array), getSize(array));
}

// return size of ptr
size_t getSize(float *ptr) {
    return sizeof(ptr);
}

