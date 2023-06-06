#include <iostream>

using std::cout;
using std::endl;

void foo(int* x, double* y, char& z);

int main (void) {
   int i = 10;
   double d = 2.5;
   char c = 'e';
   
   // shouldnt this be initialised to &i so that it points to i
   int* iPtr = &i;
    // forgot to include * in type
   double* dPtr = &d;
   // should log the memory addresses of i and d
   cout << "iPtr = " << iPtr << ", dPtr = " << dPtr << endl;
   
   // logs the values stored at i and d
   cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;
   // reassigning i via the pointer
   *iPtr = 5;
   // reassigning d via the pointer
   *dPtr = 4.25;

   // logs the values stored at i and d
   cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;

   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;
    // second parameter of foo needs to be a pointer to a double - but supplied a double 
   foo(iPtr, dPtr, c);
   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;
   foo(iPtr, dPtr, c);
   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;

   return EXIT_SUCCESS;
}


// Changed the input type of the first parameter so that it is pass by reference
void foo(int* x, double* y, char& z) {
   // needed to add the * before x to dereference and access the value
   *x += 1;
   // needed to add the * before y to dereference and access the value
   *y += 2;
    // typed z instead of c, parameter c not specified
   ++z;
}