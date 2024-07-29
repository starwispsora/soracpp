#include <iostream>
#include "stack.h"

int main()
{
    Stack s1;
    Stack s2(20);

    for (int i = 1; i <= 10; ++i) {
        if (!s1.full()) {
            s1.push(i * 100);
        }
    }

    while (!s1.empty()) {
        std::cout << s1.pop() << std::endl;
    }

    return 0;
}
