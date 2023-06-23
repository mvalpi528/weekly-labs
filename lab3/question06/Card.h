#ifndef CARD_H
#define CARD_H

//Definition of class
class Card{
public:

   //constructor
   Card(int colour, int number);

   int getColour();
   int getNumber();

private:
   int colour;
   int number;

};

#endif // CARD_H