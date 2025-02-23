// FIg 7.28: fig07_28.c
// Demostrating an array of pointers to functions

#include <stdio.h>

// prototypes
void function1(int a);
void function2(int b);
void function3(int c);

int main(void) {

    // initialize an array of 3 pointers to functions that each take
    // an int argument and return void
    void (*f[3])(int) = { function1, function2, function3 };

    printf("%s", "Enter a number between 0 and 2, 3 to end: ");
    size_t choice; // variable to hold user's choice
    scanf("%zu", &choice);

    // process user's choice
    while (choice >= 0 && choice < 3) {

        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 2, 3 to end: ");
        scanf("%zu", &choice);
    }

    puts("Program execution completed");
}

void function1(int a) {
    printf("You entered %d so function1 was called\n\n", a);
}

void function2(int b) {
    printf("You entered %d so function2 was called\n\n", b);
}

void function3(int c) {
    printf("You entered %d so function3 was called\n\n", c);
}

