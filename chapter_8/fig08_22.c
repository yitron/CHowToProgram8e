// Fig 8.22: fig08_22.c
// Using function strpbrk

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string1 = "For in many things we offend all. If any man offend not in word, the same is a perfect man, and able also to bridle the whole body - James 3:2";
    const char *string2 = "Have not I commanded thee? Be strong and of a good courage: be not afraid, neither be thou dismayed: for the LORD thy God is with thee withersoever thou goest - Joshua 1:9";

    printf("%s\"%s\"\n'%c'%s\n\"%s\"\n",
            "Of the characters in ", string2,
            *strpbrk(string1, string2),
            " appears earliest in ", string1);
}

