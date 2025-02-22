// Fig 7.15: fig07_15.c
// Putting values into an array, sorting the values
// into ascending order and printing the resulting array

#include <stdio.h>

#define SIZE 10

void bubbleSort(int * const array, const size_t size); // function prototype

int main(void) {
    int a[SIZE] = { 2, 4, 6, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in the original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}

// sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, const size_t size) {

    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size -1; ++pass) {
        for (size_t j = 0; j < size - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

// swap values at memory locations to which element1Ptr
// and element2Ptr point
void swap(int *element1Ptr, int *element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
