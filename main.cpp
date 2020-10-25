#include <iostream>
#include "math.h"
#include "geometry.h"

int main() {
    char x[14] = "Hello, World!";
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    int a{0}, b{0};
    float f(0.63547365);
//    std::cout << "Hello, World!" << std::endl;
    std::cout << x << std::endl;
    std::cout << "Enter a 1-st number: ";
    std::cin >> a;
    std::cout << "Enter a 2-nd number: ";
    std::cin >> b;
    std::cout << "You enter " << a << " and " << b << std::endl;
    std::cout << "And summ is " << add(a, b) << std::endl;
    std::cout << "And multiple is " << multiple(a, b);
    return 0;
}
