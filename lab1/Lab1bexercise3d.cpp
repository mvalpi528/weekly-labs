#include <iostream>

int numSpaces = 5;
int numStars;
int totalNumChars = 11;

int main() {

for (int i = 0; i < 6; i++){

    numStars = totalNumChars - numSpaces * 2;

    for (int i = 0; i < numSpaces; i++)
    {
        std::cout << " ";
    }
    
    for (int j = 0; j < numStars; j++)
    {
        std::cout << "*";
    }

    for (int k = 0; k < numSpaces; k++)
    {
        std::cout << " ";
    }

    std::cout << std::endl;
    numSpaces--;
    }

numSpaces += 2;

for (int i = 0; i < 5; i++){

    numStars = totalNumChars - numSpaces * 2;

    for (int i = 0; i < numSpaces; i++)
    {
        std::cout << " ";
    }
    
    for (int j = 0; j < numStars; j++)
    {
        std::cout << "*";
    }

    for (int k = 0; k < numSpaces; k++)
    {
        std::cout << " ";
    }

    std::cout << std::endl;
    numSpaces++;
    }

}