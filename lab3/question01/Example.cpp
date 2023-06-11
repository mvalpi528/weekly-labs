#include "Example.h"

Example::Example(double value) {
    this->ptrValue = new double(value);
}

Example::~Example(){
    delete ptrValue;
}

void Example::setValue(double value){
    // This is the crazy double dereference thing
    *(this->ptrValue) = value;
}

double Example::getValue(){
   return *ptrValue;
}