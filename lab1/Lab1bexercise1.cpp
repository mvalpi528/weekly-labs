// header
#include <iostream>
#include <string>

// function declaration
double add(int x, double y);

// main function
int main (void) {
    int i = 7;
    double d = 10.5;
    std::string s = "d + i = ";

    double sum = add(i, d);
    std::cout << s << sum << std::endl;

    return EXIT_SUCCESS;
}

// function definition
double add(int x, double y) {
    return x + y;
}