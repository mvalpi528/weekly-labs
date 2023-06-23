#include "Card.h"

Card::Card(int colour, int number)
// : colour(colour), number(number)
{
   this->colour = colour;
   this->number = number;
}

int Card::getColour(){
   return colour;
}

int Card::getNumber(){
   return number;
}