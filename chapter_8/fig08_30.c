// Fig 8.30: fig08_30.c
// Using function memcmp

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[] = "And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you - 1 Thessalonians 4:11";
    char s2[] = "Have not I commanded thee? Be strong and of a good courage: be not afraid, neither be thou dismayed: for the LORD thy God is with thee withersoever thou goest - Joshua 1:9";
    printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
            "s1 = ", s1,
            "s2 = ", s2,
            "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4),
            "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7),
            "memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7));
}


