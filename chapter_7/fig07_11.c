// Fig 7.11: fig07_11.c
// Printing a string one character at a time using
// a non-constant pointer to constant data

#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void) {
    // initialize char array of variable identifier name string as an array and assign it's value
    char string[] = "Jeremiah 6:16";

    puts("The string is");
    printCharacters(string);
    puts("");
}

// sPtr cannot be used to modify the character to which it points,
// i.e, sPtr is a "read-only" pointer
void printCharacters(const char *sPtr) {
    for (; *sPtr != '\0'; ++sPtr) { // no initialization here first argument is blank

        printf("%c", *sPtr);
    }
}
