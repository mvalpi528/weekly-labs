#include <iostream>

void modifyByPointer(double* num);

void modifyByReference(double& num);

int main(){

    // declares and initialises an integer
    int a = 5;
    // declares and initialises a pointer to the integer
    int* ptr_a = &a;

    // directly modifies the value of the integer
    ++a;
    // uses the pointer to modify the value of the integer
    *ptr_a += 1;

    // declares and intialises a double
    double b = 3.5;

    // creating a pointer to b
    double* ptr_b = &b;
    // creating a reference to b
    double& ref_b = b;

    // value of b before modification
    std::cout << b << std::endl;

    // modifying via passing pointer 
    modifyByPointer(ptr_b);

    // value of b after first modification
    std::cout << b << std::endl;

    // modifying via passing reference
    modifyByReference(ref_b);

    // value of b after second modification
    std::cout << b << std::endl;

    return EXIT_SUCCESS;

}

void modifyByPointer(double* num){
    *num += 1;
}

void modifyByReference(double& num){
    num++;
}