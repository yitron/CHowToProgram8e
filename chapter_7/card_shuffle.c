#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52
#define SUITS 4
#define FACES 13

void shuffleDeck(int deck[]);
void initializeDeck(int deck[]);
void printDeck(int deck[]);

const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char *faces[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

int main() {
    int deck[DECK_SIZE];
    srand(time(NULL));

    initializeDeck(deck);
    shuffleDeck(deck);
    printDeck(deck);

    return 0;
}

void initializeDeck(int deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        deck[i] = i;
    }
}

void shuffleDeck(int deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        int randomIndex;
        do {
            randomIndex = rand() % DECK_SIZE;
        } while (deck[randomIndex] != -1);
        
        deck[randomIndex] = i;
    }
}

void printDeck(int deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        int faceIndex = deck[i] % FACES;
        int suitIndex = deck[i] / FACES;
        printf("%s of %s\n", faces[faceIndex], suits[suitIndex]);
    }
}

