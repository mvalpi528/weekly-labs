#include "Card.h"
#include <iostream>

// default constructor
Card::Card(){
    std::cout << "inside the default constructor" << std::endl;
    this->colour = RED;
    this->number = 0;
};

Card::Card(Colour colour, int number){
    std::cout << "inside the custom constructor" << std::endl;
    this->colour = colour;
    this->number = number;
};

Card::Card(Card& other){
    std::cout << "inside the copy constructor" << std::endl;
    this->colour = other.colour;
    this->number = other.number;
};

Card::~Card(){
    // nothing yet
    std::cout << "inside the de-constructor" << std::endl;
};

Colour Card::getColour(){
    return this->colour;
};

int Card::getNumber(){
    return this->number;
};

std::string Card::getRule(){
    if(this->colour == 0){
        return "Highest card wins";
    } else if (this->colour == 1){
        return "Most of one number wins";
    } else if (this->colour == 2){
        return "Most of one colour wins";
    } else if (this->colour == 3){
        return "Most even cards wins";
    } else if (this->colour == 4){
        return "Most different colours wins";
    } else if (this->colour == 5){
        return "Most cards in a row wins";
    } else if (this->colour == 6){
        return "Most cards below 4 wins";
    } else {
        return "Undefined";
    }
};

std::string Card::colourAsString(){
    if(this->colour == 0){
        return "Red";
    } else if (this->colour == 1){
        return "Orange";
    } else if (this->colour == 2){
        return "Yellow";
    } else if (this->colour == 3){
        return "Green";
    } else if (this->colour == 4){
        return "Blue";
    } else if (this->colour == 5){
        return "Indigo";
    } else if (this->colour == 6){
        return "Violet";
    } else {
        return "Undefined";
    }
};