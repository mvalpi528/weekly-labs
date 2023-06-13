#include <iostream>

#define LENGTH 10
#define RETURN_EXIT_SUCCESS 0

void doubleArray(int* values, int length);

void printArray(int* values, int length);

int main(void){

    int* array = new int[LENGTH]; 

    for (int i = 0; i < LENGTH; i++){
        array[i] = i + 1;
    }

    doubleArray(array, LENGTH);
    printArray(array, LENGTH);

    delete[] array;
    array = nullptr;

    return EXIT_SUCCESS;
}

void doubleArray(int* values, int length){
    for(int i = 0; i < length; i++){
        values[i] *= 2;
    }
}

void printArray(int* values, int length){
    for(int i = 0; i < length; i++){
        std::cout << values[i] << std::endl;
    }
}