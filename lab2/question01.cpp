#include <iostream>

int main (void) {

   int a = 7;
   int* ptr = &a;

    // prints 7
   std::cout << "expecting 7: " << a << std::endl;
    // prints memory address of a
   std::cout << "expecting memory address of a: " << ptr << std::endl;
    // prints value of a - dereferencing
   std::cout << "expecting 7: " << *ptr << std::endl;

    // intitialising b with value of 10
   int b = 10;
    // reassigning ptr to memory address of b
   ptr = &b;
    // reassigning value of b to 12
   *ptr = 12;
    // prints 12
   std::cout << "expecting 12: " << b << std::endl;
    // prints 12
   std::cout << "expecting 12: " << *ptr << std::endl;
   
    // b now equals 7
   b = a;
    // prints 7 because ptr points to b and b has just been reassigned
   std::cout << "expecting 7: " << *ptr << std::endl;
   
    // stores memory address of a
   int* ptr2 = &a;

    // ptr3 is now storing the memory address of b
   int* ptr3 = &b;
    // reassigning a
   a = -3;
    // reassigning b
   b = 10;
    // ptr is pointing to b so this reassigns the value of b to 2
   *ptr = 2;

    // ptr3 is pointing to b so this changes the value of b to 6
   *ptr3 = 6;
    // prints -3
   std::cout << "expecting -3: " << a << std::endl;
    // prints 6
   std::cout << "expecting 6: " << b << std::endl;
    // prints 6
   std::cout << "expecting 6: " << *ptr << std::endl;
    // prints -3
   std::cout << "expecting -3: " << *ptr2 << std::endl;
    // prints 6
   std::cout << "expecting 6: " << *ptr3 << std::endl;

    // A pointer to a pointer 
   int** pptr = &ptr;
    // points to b via ptr - reassigns b to 20
   **pptr = 20;
    // prints -3
   std::cout << "expecting -3: " << a << std::endl;
    // prints 20
   std::cout << "expecting 20: " << b << std::endl;
    // prints 20
   std::cout << "expecting 20: " << *ptr << std::endl;
    // prints -3
   std::cout << "expecting -3: " << *ptr2 << std::endl;
    // prints 20
   std::cout << "expecting 20: " << *ptr3 << std::endl;

    // Challenge
   *&**&pptr = &a;
   **pptr = -1;
   std::cout << a << std::endl;
   std::cout << b << std::endl;

   return EXIT_SUCCESS;
}