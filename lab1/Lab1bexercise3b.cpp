#include <iostream>

int main(){

    int numSpaces = 5;

    for (int i = 0; i < 6; i++){
        for(int j = 0; j < numSpaces; j++){
            std::cout << " ";
        }
        for(int k = 0; k < 6 - numSpaces; k++){
            std::cout << "*";
        }
        std::cout << std::endl;
        numSpaces--;
    }

    return EXIT_SUCCESS;
}
