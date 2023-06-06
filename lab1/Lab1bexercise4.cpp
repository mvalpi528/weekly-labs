#include <iostream>
#define PI 3.14159

float areaOfCircle(float radius);

int main(){

    float radius;

    std::cout << "Enter the radius of your circle: ";
    std::cout << std::endl;
    std::cin >> radius;

    float calculatedArea = areaOfCircle(radius);

    std::cout << "The area of the circle is " << calculatedArea;
    std::cout << std::endl;
}

float areaOfCircle(float radius){
    return PI * radius * radius;
}
