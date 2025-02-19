// Fig 7.6: fig07_06.c
// Cube a variable using pass-by-value

#include <stdio.h>

int cubeByValue(int n); // function prototype

int main(void) {
    int number = 5; // initializer the variable identifier number of type int assigned to the value of 5

    printf("The original value of number is %d", number);

    // pass number by value to cubeByValue
    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n", number);
}

// calculate and return cube of integer argument
int cubeByValue(int n) {
    return n * n * n;
}
