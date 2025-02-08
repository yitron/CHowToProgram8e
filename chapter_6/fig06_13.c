// Fig 6.13: fig06_13.c
// Passing arrays and individual array elements to functions

#include <stdio.h>

#define SIZE 5

// function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void) {
    int a[SIZE] = {0, 1, 2, 3, 4};

    puts("Effects of passing entire array by reference:\n\nThe"
            "values of the original array are:");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%3d", a[i]);
    }

    puts("");

    modifyArray(a, SIZE);
    puts("The values of the modified array are:");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%3d", a[i]);
    }

    printf("\n\n\nEffects of passing array element "
            "by value:\n\nThe value of a[3] is %d\n", a[3]);

    modifyElement(a[3]);

    printf("The value of a[3] is %d\n", a[3]);
}

// in function modifyArray, "b" points to the original array "a"
// in memory
void modifyArray(int b[], size_t size) {

    // multiply each array element by 2
    for (size_t j = 0; j < size; ++j) {
        b[j] *= 2; // modifies the original array here
    }
}

void modifyElement(int e) {

    // multiply parameter by 2
    printf("Value in modifyElement is %d\n", e *= 2);
}


