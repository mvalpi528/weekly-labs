#include <iostream>
#include <string>

#include "Card.h"
#include "Card_v2.h"
#include "Hand.h"

#define EXIT_SUCCESS 0

// This week deals with the concept of object ownership 
// A key part of this concept is ensuring that classes are responsible 
// for their own memory

int main(){

    // // This object is created on the call stack
    // // This allows for the memory to be automatically deallocated
    // Card c1(YELLOW, 2);

    // std::cout << c1.colourAsString() << std::endl;
    // std::cout << c1.getRule() << std::endl;

    // // Creating this object on the heap
    // Card* c2 = new Card(RED, 0);
    // std::cout << c2->getColour() << std::endl;
    // std::cout << c2->colourAsString() << std::endl;
    // std::cout << c2->getRule() << std::endl;

    // // de allocating the memory for the object created on the heap
    // delete c2;

    // // calling the copy constructor 
    // Card c3 = c1;

    // The copy constructor isnt called when you try to initialise like this
    // c3 = c1 - you need to use the Card word before


    // The syntax for creating this object on the call stack 
    // Card_v2 c4(RED, 0);
    // // Creating a DEEP COPY of c4
    // Card_v2 c5 = c4;

    // // The syntax for creating this object on the heap
    // Card_v2* c6 = new Card_v2(RED,0);
    // Card_v2* c7 = c6;

    // // They have been created on heap and therefore must be deleted
    // delete c6;
    // delete c7;

    Card_v2* c8 = new Card_v2(RED,0);
    Card_v2* c9 = new Card_v2(ORANGE,1);


    Hand deck1;
    deck1.addCard(c8);
    deck1.addCard(c9);

    Hand* deck2 = new Hand();
    // Notice how the syntax changes when the the 'Hand' is created on
    // the heap
    deck2->addCard(c8);
    deck2->addCard(c9);

    // Because these cards exist independently of the 'Hand' 
    // they need to be deleted seperately
    // I think this may be the same for the nodes and nodelists 
    // in the assignment
    delete c8;
    delete c9;

    // deck2 was created on the heap and so needs to be deleted
    // this is not the case for deck1
    delete deck2;

    return EXIT_SUCCESS;
}