// Buffer overflow example in C

#include <stdio.h>

void vulnerable_function(const char *input) {
    // This is a vulnerable use of printf
    printf(input); // The user-controlled input is passed directly to printf
}

int main() {
    char user_input[100];
    printf("Enter a string: ");
    fgets(user_input, sizeof(user_input), stdin); // Read user input

    // Call the vulnerable function
    vulnerable_function(user_input);

    return 0;
}
