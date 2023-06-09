#include <iostream>

void swap(int* a, int* b);

int main (void) {
    int i = 1;
    int j = -2;

    std::cout << "Values before swap" << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;

    swap (&i, &j);

    std::cout << "Values after swap" << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;

    return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}