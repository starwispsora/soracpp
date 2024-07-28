#include <iostream>
#include "rational.h"

int main()
{
    Rational r1;
    Rational r2(3, 1);
    Rational r3(9, 12);
    Rational r4 = r3;

    r1 = r3;

    if (r1 == r3) {
        std::cout << "r1 and r3 are equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }

    r1 = r2 = r3;
    std::cout << "r1 = " << r1 << std::endl;
    std::cout << "r2 = " << r2 << std::endl;
    std::cout << "r3 = " << r3 << std::endl;

    return 0;
}
