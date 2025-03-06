// Fig 8.6: fig08_06.c
// Using function strtod from the general utilities library stdlib.h

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *string = "1 Thessalonians 4:11 'And that ye study to be quiet, and to do your own business, and to work with your own hands, as we command you'";
    char *stringPtr;

    double d = strtod(string, &stringPtr);

    printf("The string \"%s\" is converted to the\n", string);
    printf("double value %.2f and the string \"%s\"\n", d, stringPtr);
}
