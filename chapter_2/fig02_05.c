// Fig 2.5: fig02_05.c
// Addition program

#include <stdio.h>

// function main begins program execution
int main ( void ) {
    int integer1;
    float integer2;

    printf("Enter the first integer\n");
    scanf("%d", &integer1); // read an integer

    printf("Enter the second integer\n");
    scanf("%f", &integer2); // read the second integer

    int sum = integer1 + integer2;
    printf("Sum is %d\n", sum);
}
