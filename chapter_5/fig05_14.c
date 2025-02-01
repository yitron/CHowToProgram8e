// Fig 5.14: fig05_14.c
// Simulating the game of craps
// Version 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// enumeration constants represents game status
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // function prototype

int main(void) {
    srand(time(NULL));

    int myPoint; // player must make this point to win
    enum Status gameStatus;
    int sum = rollDice();

    // determine game status based on sum of dice
    switch(sum) {

        // win on first roll
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        // remember point
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }

    while (CONTINUE == gameStatus) {
        sum = rollDice();

        if (sum == myPoint) {
            gameStatus = WON;
        }
        else {
            if (7 == sum) {
                gameStatus = LOST;
            }
        }
    }

    // display won or lost message
    if (WON == gameStatus) {
        puts("Player Wins");
    }
    else {
        puts("Player Lost");
    }
}

int rollDice(void) {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}
