#include <iostream>
#include <string>

void getCharacters(char* c);
void ReverseArrayInPlace(char* array);

int main (){

    char characters[101];

    getCharacters(characters);

    std::string charactersString(characters);

    std::cout << charactersString << std::endl;

}

void getCharacters(char* array){
    // Read a single character using standard input

    int arrayPosition = 0;
    bool stop = false;
    char continueInput;

    while(arrayPosition < 100 && stop == false){
        std::cout << "enter the next character" << std::endl;
        std::cin >> array[arrayPosition];
        arrayPosition++;

        std::cout << "would you like to enter another character?" << std::endl;
        std::cout << "enter y for yes or n for no" << std::endl;
        std::cin >> continueInput;

        while (continueInput != 'y' && continueInput != 'n'){
            std::cout << "you must enter either y or n" << std::endl;
            std::cin >> continueInput;
        }

        if (continueInput == 'n'){
            stop = true;
        }
    }

    
}

void ReverseArrayInPlace(char* array){
    char temp;

}