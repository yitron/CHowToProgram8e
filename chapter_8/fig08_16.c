// Fig 8.16: fig08_16.c
// Using functions strcat and strncat

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[500] = "For in many things we offend all. If any man offend not in word, the same is a perfect man, and able also to bridle the whole body - James 3:2";
    char s2[] = "And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you - 1 Thessalonians 4:11";
    char s3[500] = ""; // initialize array s3 to empty

    printf("s1 = %s\n s2 = %s\n", s1, s2);

    // concatenate s2 to s1
    printf("strcat(s1, s2) = %s\n", strcat(s1, s2));

    // concatenate first 6 characters of s1 to s3 Place '\0'
    // after last character
    printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

    // concatenate s1 to s3
    printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
}

