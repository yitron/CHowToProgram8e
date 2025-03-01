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

int main(void) {
    int memory[MEMORY_SIZE] = {0};
    int accumulator = 0;
    int instructionCounter = 0;
    int instructionRegister = 0;
    int operationCode = 0;
    int operand = 0;

    printf("Simpletron Machine: Enter the number of values to process:\n");
    
    int numValues;
    printf("? ");
    scanf("%d", &numValues); // Read the number of values to process
    
    int address = 1; // Start storing numbers from memory[1]
    memory[0] = numValues;  // Store count at memory[0]

    printf("Enter %d numbers:\n", numValues);
    
    for (int i = 0; i < numValues; i++) {
        printf("? ");
        scanf("%d", &memory[address++]); // Store each number in memory
    }

    // Addresses for calculations
    int largestAddress = address++;  // Address to store the largest number
    memory[largestAddress] = memory[1];  // Initialize largest with first number

    // Simpletron Machine Program:
    int programAddress = address;

    // Loop through remaining numbers to find the largest
    for (int currentIndex = 2; currentIndex <= numValues; currentIndex++) {
        memory[programAddress++] = LOAD * 100 + currentIndex;  // LOAD current number
        memory[programAddress++] = SUBTRACT * 100 + largestAddress; // COMPARE with largest
        memory[programAddress++] = BRANCHNEG * 100 + (programAddress + 1); // Skip if smaller
        memory[programAddress++] = STORE * 100 + largestAddress; // Update largest
    }

    memory[programAddress++] = WRITE * 100 + largestAddress; // PRINT the largest
    memory[programAddress++] = HALT * 100; // HALT execution

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
            case SUBTRACT:
                accumulator -= memory[operand];
                break;
            case BRANCHNEG:
                if (accumulator < 0)
                    instructionCounter = operand;
                break;
            case WRITE:
                printf("Largest number: %d\n", memory[operand]);
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

