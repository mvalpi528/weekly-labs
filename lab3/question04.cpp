#include <iostream>

#define LENGTH 10
#define RETURN_EXIT_SUCCESS 0

void doubleArray(int values[], int length);

void printArray(int values[], int length);

int main(void){

    int array[LENGTH] = {1,2,3,4,5,6,7,8,9,10}; 

    doubleArray(array, LENGTH);
    printArray(array, LENGTH);

    return EXIT_SUCCESS;
}

void doubleArray(int values[], int length){
    for(int i = 0; i < length; i++){
        values[i] *= 2;
    }
}

void printArray(int values[], int length){
    for(int i = 0; i < length; i++){
        std::cout << values[i] << std::endl;
    }
}