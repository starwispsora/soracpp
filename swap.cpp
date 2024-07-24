#include <iostream>

void swap(int &ra, int &rb) {
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "a: " << a << '\t' << " b: " << b << std::endl;
    return 0;
}
