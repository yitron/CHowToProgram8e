// Fig 6.10: fig06_10.c
// Treating character arrays as strings

#include <stdio.h>

#define SIZE 200

int main(void) {
    char string1[SIZE]; // reserves 20 char
    char string2[] = "string literal"; // reserves 15 chars

    // read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%199s", string1);

    // output as strings
    printf("string1 is: %s\nstring2 is: %s\n"
            "string1 with spaces between characters is:\n",
            string1, string2);

    // output characters until null char is reached
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
        printf("%c ", string1[i]);
    }

    puts("");
}


