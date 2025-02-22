// Fig 7.24: Fig07_24.c
// Card shuffling program

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constant symbolic constants
#define SUIT 4
#define FACE 13
#define CARDS 52

// Function prototypes
void shuffle(unsigned int wDeck[SUIT][FACE]);
void deal(unsigned int wDeck[SUIT][FACE], const char *wFace[], const char *wSuit[]);

int main() {
    // Initialize deck array
    unsigned int deck[SUIT][FACE] = {0};

    // Initialize face and suit arrays
    const char *face[] = {"Ace", "Two", "Three", "Four", "Five", "Six",
                          "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL)); // Seed random number generator

    shuffle(deck);  // Shuffle the deck
    deal(deck, face, suit);  // Deal the deck

    return 0;
}

// Shuffle cards in deck
void shuffle(unsigned int wDeck[SUIT][FACE]) {
    for (int card = 1; card <= CARDS; ++card) {
        int row, column;
        do {
            row = rand() % SUIT;
            column = rand() % FACE;
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

// Deal the cards
void deal(unsigned int wDeck[SUIT][FACE], const char *wFace[], const char *wSuit[]) {
    for (int card = 1; card <= CARDS; ++card) {
        for (int row = 0; row < SUIT; ++row) {
            for (int column = 0; column < FACE; ++column) {
                if (wDeck[row][column] == card) {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], 
                           (card % 2 == 0) ? '\n' : '\t');
                }
            }
        }
    }
}

