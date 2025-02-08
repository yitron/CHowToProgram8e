// Fig 6.12: fig06_12.c
// Array name is the same as the address of the array's first element

#include <stdio.h>

int main(void) {
    char array[5]; // initialize a char array of 5 elements

    printf("    array = %p\n&array[0] = %p\n    &array = %p\n",
            array, &array[0], &array);
}
