#include <iostream>
#include "complex.h"

int main() 
{
    Complex c1;             //(0, 0i)   
    //Complex c2(3.0);       //(3, 0i)
    Complex c2 = 3.0;       //(3, 0i)
    Complex c3(3.0, 4.0);   //(3, 4i)
    //Complex c4(c3);        //(3, 4i)
    Complex c4 = c3;        //(3, 4i)

    c1 = c3; //copy assignment    

    if (c1 == c3)
    {
        std::cout << "equal" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;    
    }

    c1 = c2 + c3;

   std::cout << "c1 : " << c1 << std::endl;
   std::cout << "c2 : " << c2 << std::endl;
   std::cout << "c3 : " << c3 << std::endl;
   std::cout << "c4 : " << c4 << std::endl;
    //cout << c1; //cout.operator<<(c1) or operator<<(cout, c1)
    return 0;
}