// Fig 7.10: fig07_10.c
// Converting a string to uppercase using a
// non-constant pointer to non-constant data

#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr);

int main(void) {
    char string[] = "cHaRaCtERs and $23.55"; // initialize char array of variable name string and assign it's value

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);
}

// convert string to uppercase letters
void convertToUppercase(char *sPtr) {
    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr); // convert to upper case with ctype lib
        ++sPtr; // make sPtr point to the next character
            }
}


