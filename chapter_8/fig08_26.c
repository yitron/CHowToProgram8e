// Fig 8.26: fig08_26.c
// Using function strtok

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[] = "My son, if thou wilt receive my word, and hide my commandments with thee, so that thou shalt include thine ear to wisdom, and apply thine heart to understanding - Proverbs 2:1-2";

    printf("%s\n%s\n\n%s\n",
            "The string to be tokenized is:", string,
            "The tokens are:");

    char *tokenPtr = strtok(string, " "); // begin tokenizing sentence

    // continue tokenizing sentence until tokenPtr becomes Null
    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, " "); // get next token
    }
}

