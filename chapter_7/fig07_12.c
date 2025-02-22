// Fig 7.12: fig07_12.c
// Attempting to modify data through a
// non-constant pointer to constant data

#include <stdio.h>

void f(const int *xPtr);

int main(void) {
    int y; // define y
    
    f(y); // attempts illegal modification
           
}

void f(const int *xPtr) {
    *xPtr = 100; // error for illegal assignment
}
