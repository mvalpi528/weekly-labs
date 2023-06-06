#include <iostream>
#include <string>
#include <cctype>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

class Card {
public:
   // TODO: Constructor
    Card(int number, std::string colour);
   // 4 methods to implement
   int getNumber();
   int getColourAsInt();
   std::string getColourAsString();
   std::string getRule();

private:
   // TODO: Fields to store information
   int number;
   std::string colour;

};

int main(void) {
   // TODO: Implement making a card.
   //
    Card red7(7, "red");
    std::cout << red7.getNumber() << std::endl;
    std::cout << red7.getColourAsInt() << std::endl;
    std::cout << red7.getColourAsString() << std::endl;
    std::cout << red7.getRule() << std::endl;


   return EXIT_SUCCESS;
}

Card::Card(int number, std::string colour){
    this->number = number;
    this->colour = colour;
}

int Card::getNumber(){
    return number;
}

int Card::getColourAsInt(){
    if (colour == "red"){
        return 0;
    } else if (colour == "orange"){
        return 1;
    } else if (colour == "yellow"){
        return 2;
    } else if (colour == "green"){
        return 3;
    } else if (colour == "blue"){
        return 4;
    } else if (colour == "indigo"){
        return 5;
    } else if (colour == "violet"){
        return 6;
    } else {
        return -1;
    }
}

std::string Card::getColourAsString(){
    return colour;
}

std::string Card::getRule(){
    if (colour == "red"){
        return "highest card wins";
    } else if (colour == "orange"){
        return "most of one number wins";
    } else if (colour == "yellow"){
        return "most of one colour wins";
    } else if (colour == "green"){
        return "most even cards wins";
    } else if (colour == "blue"){
        return "most different colours wins";
    } else if (colour == "indigo"){
        return "most cards in a row wins";
    } else if (colour == "violet"){
        return "most cards below 4 wins";
    } else {
        return "-1";
    }
}