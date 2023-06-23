#ifndef HAND_H
#define HAND_H

#include "Card_v2.h"
#define MAX_CARDS 5

class Hand{
public:
    // Default constructor
    Hand();
    ~Hand();

    // method to add a card to a hand
    void addCard(Card_v2* card);
    int getNumCards();
    Card_v2* getCard(int index);


private:
    Card_v2* cards[MAX_CARDS];
    int numStored;

};


#endif // HAND_H