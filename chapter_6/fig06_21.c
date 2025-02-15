// Fig 6.21: fig06_21.c
// Initializing multidimensional array

#include <stdio.h>

void printArray(int a[][3]);

int main(void) {
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Values in array1 are:");
    printArray(array1);

    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Values in array2 are:");
    printArray(array2);

    int array3[2][3] = {{1, 2}, {4}};
    puts("Values in array3 are:");
    printArray(array3);
}

void printArray(int a[][3]) {

    for (size_t i = 0; i <= 1; ++i) {
        
        for (size_t j = 0; j <= 2; ++j) {
            printf("%d", a[i][j]);
        }
    printf("\n");
    }
}
