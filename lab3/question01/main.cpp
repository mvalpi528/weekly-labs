// Errors found 

// no deconstructor
// no ifndef, define, endif
// example class wasn't deleted after creation
// get and set value were not defined



#include <iostream>
#include "Example.h"

#define EXIT_SUCCESS 0
#define LENGTH 10

int main (void) {
    Example* example = new Example(7.5);

    double dbl = 10;
    example -> setValue(dbl);
    // b This is the alternative way of writing the line above
    // (*example).setValue(dbl);
    std::cout << example->getValue() << std::endl;

    delete example;

    return EXIT_SUCCESS;
}

