// Fig 8.18: fig08_18.c
// Using functions strcmp and strncmp

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s1 = "But by the grace of God I am what I am: and His grace which was bestowed upon me was not in vain; but I laboured more abundantly than they all: yet not I, but the grace of God which was in me - 1 Corinthians 15:10";

    const char *s2 = "But by the grace of God I am what I am: and His grace which was bestowed upon me was not in vain; but I laboured more abundantly than they all: yet not I, but the grace of God which was in me - 1 Corinthians 15:10";

    const char *s3 = "Be Still, and know that I am God. - Pslam 46:10a";

    printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
            "s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
            "strcmp(s1, s2) = ", strcmp(s1, s2),
            "strcmp(s1, s3) = ", strcmp(s1, s3),
            "strcmp(s3, s1) = ", strcmp(s3, s1));

    printf("%s%2d\n%s%2d\n%s%2d\n",
            "strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),
            "strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
            "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));
}


