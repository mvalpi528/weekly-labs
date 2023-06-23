#include <iostream>

#include "Hand.h"    
    
    
Hand::Hand(){
    std::cout << "Inside HAND constructor" << std::endl;

    // Pre-allocating all of the cards on the heap
    for(int i = 0; i < MAX_CARDS; i++){
        this->cards[i] = new Card_v2();
    }
    this->numStored = 0;
}

Hand::~Hand(){
    std::cout << "Inside HAND de-constructor" << std::endl;
    for(int i = 0; i < MAX_CARDS; i++){
        std::cout << "Deleting card: " << i + 1 << std::endl;
        // This is calling the de-constructor of the Card_v2 class
        delete this->cards[i];
    }

    
    // This is unneccesary because we didnt create the array using new 
    // Single pointer vs double pointer?
    // delete[] this->cards;
}

void Hand::addCard(Card_v2* card){
    std::cout << "A new card has been added to the deck" << std::endl;
    *(this->cards[this->numStored]) = *card;
    this->numStored++;
}

int Hand::getNumCards(){
    return this->numStored;
}

Card_v2* Hand::getCard(int index){
    return this->cards[index];
}