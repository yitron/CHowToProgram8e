// Fig 6.18: fig06_18.c
// Linear search of an array

#include <stdio.h>

#define SIZE 5

// function prototype
int linearSort(const int array[], size_t size);

int main(void) {
    int a[SIZE]; // create array a of size 5
    
    // Print the array
    printf("Array Generated:\n");
    for (size_t x = 0; x < SIZE; ++x) {
        a[x] = 2 * x;
        printf("%d ", a[x]);  // Print each element with a space separator
    }

    puts("");

    // call concrete function to sort highest number
    int answer = linearSort(a, SIZE);
    // display highest number
    printf("The higest number in the array is: %d", answer);

}

int linearSort(const int array[], size_t size) {
    // Check if the array is empty
    if (size == 0) {
        // Handle empty array case (e.g., return an error value or exit)
        return -1; // Assuming -1 is not a valid value in the array
    }

    // Initialize highest with the first element of the array
    int highest = array[0];

    // Iterate through the array starting from the second element
    for (size_t i = 1; i < size; ++i) {
        // If the current element is greater than the current highest, update highest
        if (array[i] > highest) {
            highest = array[i];
        }
    }

    // Return the highest value
    return highest;
}
