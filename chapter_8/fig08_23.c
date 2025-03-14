// Fig 8.23: fig08_23.c
// Using function strrchr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you - 1 Thessalonians 4:11";

    int c = 'z'; // character to search for

    printf("%s\n%s'%c'%s\"%s\"\n",
            "The remainder of string1 beginning with the",
            "last occurrence of character ", c,
            "is: ", strrchr(string1, c));
}

