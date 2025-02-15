// Fig 6.23: fig-6_23.c
// Using variable-length arrays in C17

#include <stdio.h>

// function prototypes
void print1DArray(size_t size, int array[size]);
void print2DArray(int row, int col, int array[row][col]);

int main(void) {
    printf("%s", "Enter the size of a one-dimensional array: ");
    int arraySize;
    scanf("%d", &arraySize);

    int array[arraySize]; // declare 1-D variable-length array

    printf("%s", "Enter the number of rows and columns in a 2-D array: ");
    int row1, col1; // number of rows and columns in a 2-D array
    scanf("%d %d", &row1, &col1);

    int array2D1[row1][col1]; // declare a 2-D variable-length array

    printf("%s", "Enter number of rows and columns in another 2-D array: ");
    int row2, col2; // number of rows and columns in another 2-D array
    scanf("%d %d", &row2, &col2);

    int array2D2[row2][col2]; // declare 2-D variable-length array

    // test sizeof operator on VLA
    printf("\nsizeof(array) yields array size of %lu bytes\n", sizeof(array));

    // assign elements of 1-D VLA
    for (size_t i = 0; i < arraySize; ++i) {
        array[i] = i * i;
    }

    // assign elements of first 2-D VLA
    for (size_t i = 0; i < row1; ++i) {

        for (size_t j = 0; j < col1; ++j) {
            array2D1[i][j] = i + j;
        }
    }

    // assign elements of second 2-D VLA
    for (size_t i = 0; i < row2; ++i) {

        for (size_t j = 0; j < col2; ++j) {
            array2D2[i][j] = i + j;
        }
    }

    puts("\nOne-dimensional array:");
    print1DArray(arraySize, array); // passs 1-D VLA into function

    puts("\nFirst Two-dimensional array:");
    print2DArray(row1, col1, array2D1); // pass 2-D VLA into function

    puts("\nSecond Two-dimensional array:");
    print2DArray(row2, col2, array2D2); // pass 2-D VLA into function
                                        
}

void print1DArray(size_t size, int array[size]) {

    // outputs contents of array
    for (size_t i = 0; i < size; ++i) {
        printf("array[%zu] = %d\n", i, array[i]);
    }
}

void print2DArray(int row, int col, int array[row][col]) {

    // outputs contents of array
    for (size_t i = 0; i < row; ++i) {

        for (size_t j = 0; j < col; ++j) {
            printf("%5du", array[i][j]);
        }
    }
}

