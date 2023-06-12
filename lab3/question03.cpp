#include <iostream>
#include <string>

#define LENGTH 10
#define RETURN_EXIT_SUCCESS 0

int main(void) {
    int* intOnTheHeap = new int(10);
    char* charOnTheHeap = new char('a');
    std::string* stringOnTheHeap =  new std::string("asdf");
    double* doubleArrayOnTheHeap = new double[LENGTH];

    for (int i = 0; i < LENGTH; i++){
        doubleArrayOnTheHeap[i] = i * 1.1;
    }

    float f1 = 1.1;
    float f2 = 1.2;
    float f3 = 1.3;
    float f4 = 1.4;
    float f5 = 1.5;
    float f6 = 1.6;
    float f7 = 1.7;
    float f8 = 1.8;
    float f9 = 1.9;
    float f10 = 2.0;

    // using the double pointer (pointer to the pointer)
    float** floatPtrArrayOnTheHeap = new float*[LENGTH];
    
    floatPtrArrayOnTheHeap[0] = &f1;
    floatPtrArrayOnTheHeap[1] = &f2;
    floatPtrArrayOnTheHeap[2] = &f3;
    floatPtrArrayOnTheHeap[3] = &f4;
    floatPtrArrayOnTheHeap[4] = &f5;
    floatPtrArrayOnTheHeap[5] = &f6;
    floatPtrArrayOnTheHeap[6] = &f7;
    floatPtrArrayOnTheHeap[7] = &f8;
    floatPtrArrayOnTheHeap[8] = &f9;
    floatPtrArrayOnTheHeap[9] = &f10;

    std::cout << "contents of intOnTheHeap: " << *intOnTheHeap << std::endl;
    delete intOnTheHeap;
    intOnTheHeap = nullptr;

    std::cout << "contents of charOnTheHeap: " << *charOnTheHeap << std::endl;
    delete charOnTheHeap;
    charOnTheHeap = nullptr;

    std::cout << "contents of stringOnTheHeap: " << *stringOnTheHeap << std::endl;
    delete stringOnTheHeap;
    stringOnTheHeap = nullptr;

    std::cout << "contents of doubleArrayOnTheHeap: " << std::endl;

    for (int i = 0; i < LENGTH; i++){
        std::cout << "da" << i << ": " << doubleArrayOnTheHeap[i] << std::endl;
    }

    delete[] doubleArrayOnTheHeap;
    doubleArrayOnTheHeap = nullptr;

    std::cout << "contents of fpa: " << std::endl;

     for (int i = 0; i < LENGTH; i++){
        std::cout << "fpa" << i << ": " << floatPtrArrayOnTheHeap[i] << std::endl;
    }

    delete[] floatPtrArrayOnTheHeap;
    floatPtrArrayOnTheHeap = nullptr;

    return EXIT_SUCCESS;

}
