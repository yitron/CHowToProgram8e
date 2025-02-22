#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DECK_SIZE 52
#define HAND_SIZE 5

typedef enum { HEARTS, DIAMONDS, CLUBS, SPADES } Suit;
typedef enum { ACE = 1, JACK = 11, QUEEN = 12, KING = 13 } Face;

typedef struct {
    Suit suit;
    int number; // 1-13 (Ace-King)
} Card;

void initialize_deck(Card deck[]) {
    int i = 0;
    for (Suit s = HEARTS; s <= SPADES; s++) {
        for (int n = 1; n <= 13; n++) {
            deck[i].suit = s;
            deck[i].number = n;
            i++;
        }
    }
}

void shuffle_deck(Card deck[]) {
    srand(time(NULL));
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void print_card(Card card) {
    const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *faces[] = {"", "Ace", "2", "3", "4", "5", "6", "7", 
                          "8", "9", "10", "Jack", "Queen", "King"};
    
    printf("%-5s of %s\n", 
           (card.number >= 11 || card.number == 1) ? faces[card.number] : &"23456789"[2*(card.number-2)],
           suits[card.suit]);
}

int main() {
    Card deck[DECK_SIZE];
    Card hand[HAND_SIZE];
    bool chosen[DECK_SIZE] = {false};
    int selected_count = 0;

    initialize_deck(deck);
    shuffle_deck(deck);

    // Deal 5 unique cards
    for (int i = 0; i < HAND_SIZE; i++) {
        int index;
        do {
            index = rand() % DECK_SIZE;
        } while (chosen[index]);
        
        chosen[index] = true;
        hand[i] = deck[index];
        selected_count++;
    }

    printf("Dealt cards:\n");
    for (int i = 0; i < HAND_SIZE; i++) {
        print_card(hand[i]);
    }

    // Check remaining deck for desired card (e.g., Ace of Spades)
    const int desired_number = 1; // Ace
    const Suit desired_suit = SPADES;

    printf("\nSearching for Ace of Spades in remaining deck...\n");
    bool found = false;
    for (int i = 0; i < DECK_SIZE; i++) {
        if (!chosen[i] && 
            deck[i].number == desired_number && 
            deck[i].suit == desired_suit) {
            printf("Found: ");
            print_card(deck[i]);
            found = true;
            break;
        }
    }

    if (!found) {
        printf("Desired card not found in remaining deck.\n");
    }

    return 0;
}
