// Fig 7.21: fig07_21.c
// Copying a string using array notation and pointer notation

#include <stdio.h>

#define SIZE 500

// function prototypes
void copy1(char * const s1, const char * const s2);
void copy2(char *s1, const char *s2);

int main(void) {
    char string1[SIZE]; // create array with variable identified name string1
    char *string2 = "But by the grace of God I am what I am: and His grace which was bestowed upon me was not in vaid; but I labour more abundantly than they all: yet not I, but the grace of God which was in me - 1 Corinthians 15:10";

    copy1(string1, string2); // pass by reference

    printf("string1 = %s\n", string1);

    char string3[SIZE]; // create array with variable identifier name string3
    char string4[] = "To do justly, love mercy and walk humbly with God - Micah 6:8";

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}

void copy1(char * const s1, const char * const s2) {
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i) {
        ;
    }
}

void copy2(char *s1, const char *s2) {
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
        ;
    }
}

