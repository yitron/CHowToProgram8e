// Fig 5.16: fig05_16.c
// Scoping

#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // global variable

int main(void) {
    int x = 5; // local variable

    printf("Local x in outer scope of main is %d\n", x);

    {
        int x = 7;

        printf("Local x in inner scope of main is %d\n", x);
    }

    printf("Local block in inner scope of main ended, now back to outerscope x value of %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();

    useLocal();
    useStaticLocal();
    useGlobal();

    printf("\nlocal x in main is %d\n", x);
}

// start of functions
void useLocal(void) {
    int x = 25;
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void) {
    static int x = 37;
    printf("\nlocal x in useStaticLocal is %d after entering useStaticLocal\n", x);
    ++x;
    printf("local x is %d on exiting useStaticLocal\n", x);
}

void useGlobal(void) {
    printf("\nthe value for global value of x is %d\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}

