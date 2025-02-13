// Fig 6.19: fig06_19.c
// Binary search of a sorted array

#include <stdio.h>

#define SIZE 15

// function prototypes
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

int main(void) {
    int a[SIZE]; // initialize array a to SIZE constant
    
    for (size_t i = 0; i < SIZE; ++i) {
        a[i] = 2 * i;
        printf("Generated Array: %d\n", a[i]);
    }

    printf("%s", "Enter a number between 0 and 28: ");

    int key; // value to locate array a
    scanf("%d", &key);

    printHeader();

    // search for key in array a
    size_t result = binarySearch(a, key, 0, SIZE -1);

    // display results
    if (result != -1) {
        printf("\n%d found at index %zu\n", key, result);
    }
}

// function to perform binary search of an array
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {

    // loop until low index is greater than high index
    while (low <= high) {

        // determine middle element of subarray being searched
        size_t middle = (low + high) / 2;

        // display subarray used in this loop iteration
        printRow(b, low, middle, high);

        // if searchKey matched middle element, return middle
        if (searchKey == middle) {
            return middle;
        }

        // if searchKey is less than  middle, set new high
        else if (searchKey < b[middle]) {
            high = middle - 1; // search low end of array
            }
        else {
            low = middle + 1; // search high end of array
            }
    }

    return -1; // searchKey not found
}

// Print one row of output showing the current
// part of the array being processed
void printRow(const int b[], size_t low, size_t mid, size_t high) {

    // loop through entire array
    for (size_t i = 0; i < SIZE; ++i) {

        // display spaces if outside current subarray range
        if (i < low || i > high) {
            printf("%s", "      ");
        }
        else if (i == mid) {
            printf("%3d*", b[i]);
        }
        else {
            printf("%3d ", b[i]);
        }
    }

    puts("");
}

// Print a header for the output
void printHeader(void) {
    puts("\nIndices");

    // output column head
    for (unsigned int i = 0; i < SIZE; ++i) {
        printf("%3u ", i);
    }

    puts("");

    // output line of - characters
    for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
        printf("%s", "-");
    }

    puts("");
}

    
