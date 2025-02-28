// Exercise 7.32b
// Use a counter-controlled loop to read seven numbers,
// some positive and some negative, and compute and print their average

#include <stdio.h>

#define SIZE 7

int average(int numbers[]);

int main(void) {

    int numbers[SIZE] = { 1, 4, 6, 3, -19, -4, 8 };

    average(numbers);


}

int average(int numbers[]) {
    double average;
    int total;

    // get the total sum of the array
    for (size_t i = 0; i < SIZE; ++i) {
        total += numbers[i];
    }
    
    // find the average
    average = (double)total / SIZE;

    printf("The average is %.2f", average);

    return average;
}
        
