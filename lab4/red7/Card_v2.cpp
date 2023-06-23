#include "Card_v2.h"
#include <iostream>

// default constructor
// The default constructor is implemented differently if the properties
// of the object are pointers to memory allocated on the heap
Card_v2::Card_v2(){
    std::cout << "inside the CARD default constructor" << std::endl;
    this->colour = new Colour(RED);
    this->number = new int(0);
};

Card_v2::Card_v2(Colour colour, int number){
    std::cout << "inside the CARD custom constructor" << std::endl;
    this->colour = new Colour(colour);
    this->number = new int(number);
};

Card_v2::Card_v2(Card_v2& other){
    std::cout << "inside the CARD copy constructor" << std::endl;

    // this is a SHALLOW COPY because other.colour and other.number
    // are both pointers, so copying them will simply copy the pointer
    // meaning that the copied object will point to same memory on the 
    // heap as the original object
    // this->colour = other.colour;
    // this->number = other.number;

    // DEEP COPY
    // This is allocating new memory on the heap and intialising it
    // to the values that the pointers in the original object were
    // referencing. That is why they need to be dereferenced inside
    // the brackets
    this->colour = new Colour(*other.colour);
    this->number = new int(*other.number);

};

Card_v2::~Card_v2(){
    // New memory has been allocated for the properties of the object
    // this means that it needs to be cleaned up in the de-constructor
    std::cout << "inside the CARD de-constructor" << std::endl;
    delete this->colour;
    delete this->number;
};

Colour Card_v2::getColour(){
    // This needs to be dereferenced otherwise it will return the pointer
    // In this implementation 'this.colour' is of type Colour*
    // That would produce an error because the return type of the
    // function is Colour and not Colour*
    return *(this->colour);
};

int Card_v2::getNumber(){
    // Same logic applies for the getNumber method too
    return *(this->number);
};

// Same applies for all of the conditional statements in this
// if else block
// Without dereferencing you would be comparing a pointer to an 
// int which doesn't make sense
std::string Card_v2::getRule(){
    if(*(this->colour) == 0){
        return "Highest card wins";
    } else if (*(this->colour) == 1){
        return "Most of one number wins";
    } else if (*(this->colour) == 2){
        return "Most of one colour wins";
    } else if (*(this->colour) == 3){
        return "Most even cards wins";
    } else if (*(this->colour) == 4){
        return "Most different colours wins";
    } else if (*(this->colour) == 5){
        return "Most cards in a row wins";
    } else if (*(this->colour) == 6){
        return "Most cards below 4 wins";
    } else {
        return "Undefined";
    }
};

std::string Card_v2::colourAsString(){
    if(*(this->colour) == 0){
        return "Red";
    } else if (*(this->colour) == 1){
        return "Orange";
    } else if (*(this->colour) == 2){
        return "Yellow";
    } else if (*(this->colour) == 3){
        return "Green";
    } else if (*(this->colour) == 4){
        return "Blue";
    } else if (*(this->colour) == 5){
        return "Indigo";
    } else if (*(this->colour) == 6){
        return "Violet";
    } else {
        return "Undefined";
    }
};