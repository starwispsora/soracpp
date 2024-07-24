#include <iostream>
#include "stack.h"

int main()
{
    Stack s1; //Stack s1(100)
    Stack s2(20);
    Stack empty;
    Stack full;
    Stack push;
    Stack pop;
    // Stack s3 = s2;
    // s1 = s2;

    for (int i = 0; 10; ++i)
    {
        if(!s1.full())
        {
            s1.push(i*100);
        }
    }

    while (!s1.empty())
    {
        std::cout << s1.pop() << std::endl;
    }

    retrun 0;
}