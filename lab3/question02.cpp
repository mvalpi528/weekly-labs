#include <iostream>
#include <string>

#define LENGTH 10
#define RETURN_EXIT_SUCCESS 0

typedef int Integer;
typedef char Character;
typedef std::string String;
typedef double DoubleArray[LENGTH];
typedef float* FloatPtrArray[LENGTH];

int main(void) {
    Integer i = 10;
    Character c = 'a';
    String s = "asdf";
    DoubleArray da = {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};

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

    FloatPtrArray fpa = {&f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8, &f9, &f10};

    std::cout << "contents of i: " << i << std::endl;
    std::cout << "contents of c: " << c << std::endl;
    std::cout << "contents of s: " << s << std::endl;
    std::cout << "contents of da: " << std::endl;

    for (int i = 0; i < LENGTH; i++){
        std::cout << "da" << i << ": " << da[i] << std::endl;
    }

    std::cout << "contents of fpa: " << std::endl;

     for (int i = 0; i < LENGTH; i++){
        std::cout << "fpa" << i << ": " << fpa[i] << std::endl;
    }

    return EXIT_SUCCESS;

}
