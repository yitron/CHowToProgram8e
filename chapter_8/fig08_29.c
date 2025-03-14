// Fig 8.29: fig08_29.c
// Using function memmove

#include <stdio.h>
#include <string.h>

int main(void) {
    char x[] = "For in many things we offend all. If any man offend not in word, the same is a perfect man, and able also to bridle the whole body - James 3:2";

    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array x after memmove is: ",
            (char *) memmove(x, &x[5], 10));
}

