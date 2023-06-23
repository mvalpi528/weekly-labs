#ifndef CARD_V2_H
#define CARD_V2_H

#include <string>

#define RED 0
#define ORANGE 1
#define YELLOW 2
#define GREEN 3
#define BLUE 4
#define INDIGO 5
#define VIOLET 6

typedef int Colour;

class Card_v2 {
public:
    Card_v2();
    Card_v2(Colour colour, int number);
    Card_v2(Card_v2& other);
    ~Card_v2();

    Colour getColour();
    int getNumber();
    std::string getRule();

    std::string colourAsString();

private:
    Colour* colour;
    int* number;

};

#endif // CARD_H