// Fig 6.8: fig06_08.c
// Displaying a histogram

#include <stdio.h>

#define SIZE 5

int main(void) {
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "ELEMENT", "VALUE", "HISTOGRAM");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7zu%13d        ", i, n[i]);

        for (int j = 1; j <= n[i]; ++j) {
            printf("%c", '*');
        }

        puts(""); // end a histogram with a new line

    }
}

