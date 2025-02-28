// Special Exercise from Chapter 7
// Building Simpletron

#include <stdio.h>

// i/o operations
#define READ 10 // read a word from the terminal into a specific location in memory
#define WRITE 11 // write a word from a specific location in memory to the terminal

// load/store operations
#define LOAD 20 // load a word from a specific location in memory into the accumulator
#define STORE 21 // store a word from the accumulator into a specific location in memory

// arithmetic operations
#define ADD 30 // add a word from a specific location in memory to the word in the accumulator
               // (leave result in accumulator)

#define SUBTRACT 31 // subtract a word from a specific location in memory from the word in the accumulator
                    // (leave result in accumulator)

#define DIVIDE 32 // divide a word from a specific location in memory into the word in the accumulator
                  // (leave result in accumulator)

#define MULTIPLY 33 // multiplay a word from a specific location in memory by the word in the accumulator
                    // (leave result in accumulator)

// transfer-of-control operations
#define BRANCH 40 // branch to a specific location in memory
#define BRANCHNEG 41 // branch to a specific location in memory if the accumulator is negative
#define BRANCHZERO 42 // branch to a specific location in memory if the accumulator is zero
#define HALT 43 // Halt. i.e program completes its task

int main(void) {
    printf("%s", "***Welcome to Simpletron!***\n");
    printf("%s", "***Please enter your program instruction***\n");
    printf("%s", "***(or data word) one at a time. I will type the***\n");
    printf("%s", "***location number and a question mark(?)***\n");
    printf("%s", "***You then type the word for that location.***\n");
    printf("%s", "***Type the sentinel -99999 to stop entering***\n");
    printf("%s", "*** your program***");
}
