// Fig 8.31: fig08_31.c
// Using function memchr

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s = "And I sent messengers unto them, saying I am doing a great work, so that I cannot come down: why should the work cease, whilst I leave it, and come down to you? - Nehemiah 6:3";

    printf("%s\'%c\'%s\"%s\"\n",
            "The remainder of s after character ", 'r',
            " is found is ", (char *) memchr(s, 'r', 16));
}

