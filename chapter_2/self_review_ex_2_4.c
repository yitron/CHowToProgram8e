// Program for Self Review Exercise
// Question 2.4


#include <stdio.h> // pre processor directive

// function main executes program
int main (void) {
    int x;
    int y;
    int z;

    printf("Enter three Integers:\n");
    scanf("%d%d%d", &x, &y, &z);

    int result = x * y * z;

    printf("The product is %d\n", result);
} // end
