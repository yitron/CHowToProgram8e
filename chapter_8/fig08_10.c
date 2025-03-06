// Fig 8.10: fig08_10.c
// Using functions fget and putchar

#include <stdio.h>

#define SIZE 150

void reverse(const char * const  sPtr); // prototype

int main(void) {
    char sentence[SIZE]; // create char array

    puts("Enter a line of text:");

    // use fget to read a line of text
    fgets(sentence, SIZE, stdin);

    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
}

void reverse(const char * const sPtr) {
    // if end of the string
    if ('\0' == sPtr[0]) { // base case
        return;
    }
    else {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}

