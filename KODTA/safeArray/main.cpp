#include <iostream>
#include "safeArray.h"
#include "array.h"

int main() {
    SafeArray sArr1; // Default size
    SafeArray sArr2(10); // Size 10
    int nums[] = {1, 2, 3, 4, 5};
    SafeArray sArr3(nums, 5); // Initialize with array
    const SafeArray sArr4 = sArr3; // Copy constructor

    sArr1 = sArr3; // Assignment operator

    if (sArr1 == sArr3) {
        std::cout << "sArr1 is equal to sArr3" << std::endl;
    } else {
        std::cout << "sArr1 is not equal to sArr3" << std::endl;
    }

    for (int i = 0; i < sArr1.size(); ++i) {
        std::cout << sArr1[i] << std::endl;
    }

    Array arr1(10);
    SafeArray arr2(10);

    Array *pArr = new SafeArray(sArr3);
    (*pArr)[0] = 1; // Accessing first element

    delete pArr; // Correctly deleting allocated memory

    return 0;
}
