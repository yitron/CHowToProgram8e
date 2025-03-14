// Fig 8.21: fig08_21.c
// Using function strcspn

#include <stdio.h>
#include <string.h>

int main(void) {
    // initialize two char pointers
    const char *string1 = "My Son, if thou wilt receive my word, and hide my commandments with thee, so that thou shalt incline thine ear to wisdom, and apply thine heart to understanding - Provers 2:1-2";

    const char *string2 = "And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you - 1 Thessalonians 4:11";

    printf("%s%s\n%s%s\n\n%s\n%s%lu\n",
            "string1 = ", string1, "string2 = ", string2,
            "The length of the initial segment of string1",
            "containing no characters from string2 = ",
            strcspn(string1, string2));
}
