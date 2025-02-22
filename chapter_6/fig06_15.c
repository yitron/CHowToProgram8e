// Fig 6.15: fig06_15.c
// Sorting an array's values into ascending order

#include <stdio.h>

#define SIZE 10

int main(void) {

    // initialize array with variable identifier 'a'
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    // bubble sort
    // loop to control number of passes
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        
        for (size_t i = 0; i < SIZE - 1; ++i) {

            // compare adjacent elements and swap them if first
            // element is greater than the second element
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }

    puts("\nData items in ascending order");

    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}

