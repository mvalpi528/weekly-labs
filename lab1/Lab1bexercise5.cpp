#include <iostream>

int main () {

    int userChoice;

    std::cout << "Enter a number between 0 - 48 inclusive: ";
    std::cin >> userChoice;

    if (userChoice < 0 || userChoice > 48){
        std::cout << "Error! - the number you entered is out of range" << std::endl;
        bool inRange = false;
        while (!inRange)
        {
            std::cout << "Enter a number between 0 - 48 inclusive: ";
            std::cin >> userChoice;
            if (userChoice < 0 || userChoice > 48){
                inRange = false;    
            } else {
                inRange = true;
            }
        }
        
    }

    if (userChoice <= 6){
         std::cout << "Red " << userChoice + 1 << std::endl;
    } else if (userChoice <= 13){
         std::cout << "Orange " << userChoice - 6 << std::endl;
    } else if (userChoice <= 20){
         std::cout << "Yellow " << userChoice - 13 << std::endl;
    } else if (userChoice <= 27){
         std::cout << "Green " << userChoice - 20 << std::endl; 
    } else if (userChoice <= 34){
         std::cout << "Blue " << userChoice - 27 << std::endl; 
    } else if (userChoice <= 41){
         std::cout << "Indigo " << userChoice - 34 << std::endl; 
    } else if (userChoice <= 48){
         std::cout << "Violet " << userChoice - 41 << std::endl; 
    }

}