#include "rational.h"
#include <iostream>

int main() {
    // Create Rational numbers
    Rational r1(3, 4); // Represents 
    Rational r2(3); 
    Rational r3;


   r3 = r1;

   if (r1 == r3) {
       std::cout << "r1 and r3 are equal" << std::endl;
    } 
    else {
        std::cout<< "rq and r3 are not equal" << std::endl;
    }

    return 0;
}