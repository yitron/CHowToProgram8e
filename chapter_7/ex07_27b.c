#include <stdio.h>

#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

#define MEMORY_SIZE 100
#define NUM_COUNT 7  // Number of inputs

int main(void) {
    int memory[MEMORY_SIZE] = {0};
    int accumulator = 0;
    int instructionCounter = 0;
    int instructionRegister = 0;
    int operationCode = 0;
    int operand = 0;

    printf("Simpletron Machine: Enter 7 numbers (positive or negative):\n");

    // Store user input in memory
    int address = 0;
    for (int i = 0; i < NUM_COUNT; i++) {
        printf("? ");
        scanf("%d", &memory[address++]);  // Store the number in memory
    }

    // Addresses for calculations
    int sumAddress = address++;       // Address to store the sum
    int divisorAddress = address++;   // Address to store divisor (7)
    int resultAddress = address++;    // Address to store the average

    memory[divisorAddress] = NUM_COUNT; // Store 7 in memory for division

    // Simpletron Machine Program:
    int programAddress = address;
    memory[programAddress++] = LOAD * 100 + 0;  // LOAD first number

    for (int i = 1; i < NUM_COUNT; i++) {
        memory[programAddress++] = ADD * 100 + i; // ADD next number
    }

    memory[programAddress++] = STORE * 100 + sumAddress;  // STORE sum
    memory[programAddress++] = LOAD * 100 + sumAddress;   // LOAD sum
    memory[programAddress++] = DIVIDE * 100 + divisorAddress; // DIVIDE by 7
    memory[programAddress++] = STORE * 100 + resultAddress; // STORE result
    memory[programAddress++] = WRITE * 100 + resultAddress; // PRINT result
    memory[programAddress++] = HALT * 100;  // HALT execution

    // Execution cycle
    instructionCounter = address; // Start execution at programAddress
    while (instructionCounter < MEMORY_SIZE) {
        instructionRegister = memory[instructionCounter++];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;

        switch (operationCode) {
            case LOAD:
                accumulator = memory[operand];
                break;
            case STORE:
                memory[operand] = accumulator;
                break;
            case ADD:
                accumulator += memory[operand];
                break;
            case DIVIDE:
                if (memory[operand] != 0)
                    accumulator /= memory[operand];
                else
                    printf("Error: Division by zero.\n");
                break;
            case WRITE:
                printf("Average: %d\n", memory[operand]);
                break;
            case HALT:
                printf("Execution halted.\n");
                return 0;
            default:
                printf("Invalid operation code: %d\n", operationCode);
                return 1;
        }
    }
    return 0;
}

