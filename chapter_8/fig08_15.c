// Fig 8.15: fig08_15.c
// Using functions strcpy and strncpy

#include <stdio.h>
#include <string.h>

#define SIZE1 200
#define SIZE2 120

int main(void) {
    char x[] = "My son, if thou wilt receive my word, and hide my commandments with thee, so that thou shalt incline thine ear unto wisdom, and apply thine heart to understanding - Provers 2:1-2";
    char y[SIZE1];
    char z[SIZE2];

    // copy contents of x into y
    printf("%s%s\n%s%s\n",
            "The string in array x is: ", x,
            "The string in array y is: ", y, strcpy(y, x));

    // copy first 14 characters of x into z
    // Does not copy null character
    strncpy(z, x, SIZE2 - 1);
    z[SIZE2 - 1] = '\0';
    printf("The string in array z is: %s\n", z);
}

