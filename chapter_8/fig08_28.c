// Fig 8.28: fig08_28.c
// Using function memcpy

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[100]; // create char array s1
    char s2[] = "My Son, if thou will receive my word, and hide my commandments with thee, so that thou shalt incline thine ear to wisdom, and apply thine heart to understanding - Proverbs 2:-12";

    memcpy(s1, s2, 100);
    printf("%s\n%s\"%s\"\n",
            "After s2 is copied into s1 with memcpy,",
            "s1 contains ", s1);
}

