#include <iostream>

int main () {

    int userNumbers[10];
    int arraySum = 0;

    for(int i = 0; i < 10; i++){
        std::cout << "Enter number " << i + 1 << ": \n";
        std::cin >> userNumbers[i];
    }

    for(int i = 0; i < 10; i++){
        arraySum += userNumbers[i];
    }

    std::cout << "The sum of all the numbers you entered is " << arraySum << std::endl;
}