// Fig 6.18: fig06_18.c
// Linear search of an array

#include <stdio.h>

#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t size);

int main(void) {
    int a[SIZE]; // create array a of size 100
    
    // Print the array
    printf("Array Generated:\n");
    for (size_t x = 0; x < SIZE; ++x) {
        a[x] = 2 * x;
        printf("%d ", a[x]);  // Print each element with a space separator
    }

    puts("");

    printf("Enter integer search key: ");
    int searchKey; // value to locate in array a
    scanf("%d", &searchKey);

    // attempt to locate searchKey in array a
    size_t index = linearSearch(a, searchKey, SIZE);

    // display results
    if (index != -1) {
        printf("Found value at index %zu\n", index);
    }
    else {
        puts("Value not found");
    }
}

// compare key to every element of array until the location is found
// or until the end of array is reached; return index of element
// if key is found or -1 if key is not found
size_t linearSearch(const int array[], int key, size_t size) {
    for (size_t n = 0; n < size; ++n) {
        if (array[n] == key) {
            return n;
        }
    }

    return -1; // key not found
               
}

