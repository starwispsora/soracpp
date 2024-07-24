#include <iostream>
#include "string.h"

int main() 
{
    String s1;
    String s2 = "hello, world";
    String s3 = s2;

    s1 = s2;
    if (s1 == s2)
    {
        std::cout << "equal" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;
    }   

    std::cout<< "s1  : " << s1.c_str() << std::endl;
    std::cout<< "s1  len : " << s1.size() << std::endl;

    s1 = "hello, ";
    s2 = "world!";

    String s4 = s1 + s2;

    std::cout<< s1<< std::endl;
    std::cout<< s2<< std::endl;
    std::cout<< s3<< std::endl;
    std::cout<< s4<< std::endl;  


    return 0;
}