#include <iostream>
#include "complex.h"

int main()
{
    Complex c1, c2, c3;
    std::cout << "Enter a complex number (format: (re,im)): ";
    std::cin >> c1;

    std::cout << "Enter another complex number (format: (re,im)): ";
    std::cin >> c2;

    if (!std::cin) { // Check for input errors
        std::cout << "Invalid input format." << std::endl;
        return 1;
    }

    c3 = c1 + c2;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3 (c1 + c2): " << c3 << std::endl;

    return 0;
}
