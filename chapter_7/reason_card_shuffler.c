#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARDS 52

int main(void) {
    // Arrays for card faces and suits
    const char *faces[] = {
        "Ace", "Two", "Three", "Four", "Five", "Six",
        "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };
    const char *suits[] = {
        "Hearts", "Diamonds", "Clubs", "Spades"
    };

    // Array to represent the deck
    // We'll store an integer 0..51 that represents each card
    // card_number = (suit * 13) + face
    int deck[NUM_CARDS];
    
    // Initialize the deck to an invalid value (e.g., -1) to mark empty slots
    for (int i = 0; i < NUM_CARDS; i++) {
        deck[i] = -1;
    }

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // For each of the 52 cards, choose a random slot that hasn't been used yet
    for (int card = 0; card < NUM_CARDS; card++) {
        int slot;
        do {
            slot = rand() % NUM_CARDS; // pick a random index from 0 to 51
        } while (deck[slot] != -1);   // repeat if the slot is already used

        // Place this card number in the chosen slot
        deck[slot] = card;
    }

    // Print the shuffled deck
    // We go through each of the 52 slots in the deck array
    // deck[i] tells us which card is in that slot
    // faceIndex = deck[i] % 13
    // suitIndex = deck[i] / 13
    for (int i = 0; i < NUM_CARDS; i++) {
        int cardNumber = deck[i];
        int faceIndex = cardNumber % 13;
        int suitIndex = cardNumber / 13;
        
        printf("%5s of %-8s\n", faces[faceIndex], suits[suitIndex]);
    }

    return 0;
}

