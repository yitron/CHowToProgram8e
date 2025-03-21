// Fig 8.24: fig08_24.c
// Using function strspn

#include <stdio.h>
#include <string.h>

int main(void) {
    // initialize two char pointers
    const char *string1 = "The value is 3.14159";
    const char *string2 = "aehi lsTuv";

    printf("%s%s\n%s%s\n\n%s\n%s%lu\n",
            "string1 = ", string1,
            "string2 = ", string2,
            "The length of the initial segment of string1",
            "containing only chracters from string2 = ",
            strspn(string1, string2));
}

