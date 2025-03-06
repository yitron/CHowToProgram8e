// Fig 8.8: fig08_08.c
// Using function strtoul from the standard library

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *string = "1234567abc"; // initialize a pointer named string and set it's value
    char *remainderPtr; // create a char pointer to store the remainder after the function operations
    
    unsigned int long x = strtoul(string, &remainderPtr, 0);

    printf("%s\"%s\"\n%s%lu\n%s\"%s\"%s%lu\n",
            "The original string is ", string,
            "The converted value is ", x,
            "The remainder of the original value is ", remainderPtr,
            "The converted value minus 567 is ", x - 567);
}

