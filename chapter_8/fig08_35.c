// Fig 8.35: fig08_35.c
// Using function strlen

#include <stdio.h>
#include <string.h>

int main(void) {

    // initialize 3 char pointers
    const char *string1 = "And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you - 1 Thessalonians 4:11";
    const char *string2 = "For in many things we offend all. If any man offend not in word, the same is a perfect man, and able also to bridle the whole body - James 3:2";
    const char *string3 = "And I sent messengers unto them, saying, I am doing a great work, so that I cannot come down: why should the work cease, whilst I leave it, and come down to you? - Nehemiah 6:3";
    const char *string4 = "My Son, if thou wilt receive my word, and hide my commandment, and incline thine ear to wisdom, and apply thine heart to understanding - Proverbs 2:1-2";

    printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu",
            "The length of 1 Thessalonians 4:11", string1, " is ", strlen(string1),
            "The length of James 3:2", string2, " is ", strlen(string2),
            "The length of Nehemiah 6:3", string3, " is ", strlen(string3),
            "The length of Proverbs 2:1-2", string4, " is ", strlen(string4));
}

