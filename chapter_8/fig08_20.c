// Fig 8.20: fig08_20.c
// Using function strchr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string = "And I sent messengers unto them, saying, I am doing a great work, so that I cannot come down: why should the work cease, whilst I leave it, and come down to you? - Nehemiah 6:3";

    char character1 = 'a'; // initialize a variable identifier name character1 and set it's value
    char character2 = 'z'; // initialize a variable identifier name character2 and set it's value

    // if character1 was found in string
    if (strchr(string, character1) != NULL) {
        printf("\'%c\' was found in \"%s\".\n",
                character1, string);
    }
    else {
        // if character1 not found
        printf("\'%c\' was not found in \"%s\".\n",
                character1, string);
    }

    // if character2 was found in string
    if (strchr(string, character2) != NULL) {
        printf("\'%c\' was found in \"%s\".\n",
                character2, string);
    }
    else {
        // if character2 was not found
        printf("\'%c\' was not found in \"%s\".\n",
                character2, string);
    }
}

                
