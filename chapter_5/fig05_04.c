// Fig 5.4: fig05_04.c
// Finding the maximum of three integers

#include <stdio.h>

int maximum(int x, int y, int z); // function prototype

int main(void) {
    int number1;
    int number2;
    int number3;

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    // number1, number2, number3 are int arguments
    // to the maximum function call
    printf("Maximum is: %d\n", maximum(number1, number2, number3));
}

// Function maximum definition
// x, y, z are parameters
int maximum(int x, int y, int z) {
    int max = x; // assume x is largest
                 
    if (y > max) {
        max = y;
    }

    if (z > max) {
        max = z;
    }

    return max;
}

