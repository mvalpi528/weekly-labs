#include <iostream>

int main (){

    std::string name;
    int age;
    std::string DOB;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your DOB as dd/mm/yyyy: ";
    std::cin >> DOB;

    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "DOB: " << DOB << "\n";

    return EXIT_SUCCESS;
}