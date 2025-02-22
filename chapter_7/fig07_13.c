// Fig 7.13: fig07_13.c
// Attempting to modify a constant pointer to non-constant data

#include <stdio.h>

int main(void) {
    int x;
    int y;

    int * const ptr = &x;

    *ptr = 7;
    ptr = &y;
}
