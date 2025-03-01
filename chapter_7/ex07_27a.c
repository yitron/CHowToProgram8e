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
#define SENTINEL -9999  // Sentinel value to terminate input

int main(void) {
    int memory[MEMORY_SIZE] = {0};
    int accumulator = 0;
    int instructionCounter = 0;
    int instructionRegister = 0;
    int operationCode = 0;
    int operand = 0;

    printf("Simpletron Machine: Enter positive integers (-9999 to stop):\n");

    // Load numbers into memory
    int address = 0;
    int input;
    while (address < MEMORY_SIZE - 1) {
        printf("? ");
        scanf("%d", &input);
        if (input == SENTINEL) {
            break;
        }
        memory[address++] = input;  // Store the number in memory
    }

    // Address of the sum (last number + 1)
    int sumAddress = address;

    // Simpletron Machine Program:
    int programAddress = address + 1;
    memory[programAddress++] = LOAD * 100 + 0;   // LOAD first number
    for (int i = 1; i < address; i++) {
        memory[programAddress++] = ADD * 100 + i; // ADD next number
    }
    memory[programAddress++] = STORE * 100 + sumAddress; // STORE sum
    memory[programAddress++] = WRITE * 100 + sumAddress; // PRINT sum
    memory[programAddress++] = HALT * 100;  // HALT

    // Execution cycle
    instructionCounter = address + 1; // Start execution at programAddress
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
            case WRITE:
                printf("Sum: %d\n", memory[operand]);
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

