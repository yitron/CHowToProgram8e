// Fig 3.13: fig03_13.c
// Preincrementing and postincrementing

#include <stdio.h> // preprocessor directive

// function mains begin program execution
int main (void) {
    int c; // declare variable

    // demo postincrement
    c = 5; // assigns 5 to integer variable c
    printf("%d\n", c); // print initial value of variable
    printf("%d\n", c++); // print 5 then postincrement
    printf("%d\n", c); // print result from postincrement

    // demo preincrement
    printf("%d\n", ++c); // print preincrement
    printf("%d\n", c); // print result from preincrement
} // end function main
