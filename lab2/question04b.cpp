#include <iostream>

bool getCharacter(char* c);

int main (){

    char c;
    char* ptr_c = &c;

    getCharacter(ptr_c);

    // Output that character using standard output
    std::cout << "The character you entered was: " << c << std::endl;
    

}

bool getCharacter(char* c){
    // Read a single character using standard input
    std::cout << "enter a single character" << std::endl;
    std::cin >> *c;

    return true;
    
}