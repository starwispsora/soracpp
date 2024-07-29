#include "safeArray.h"
#include <cassert>

SafeArray::SafeArray(int size)
: Array(size) {
}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size) {
}

SafeArray::SafeArray(const SafeArray& rhs)
: Array(rhs) {
}

SafeArray::~SafeArray() {
}

SafeArray& SafeArray::operator=(const SafeArray& rhs) {
    if (this != &rhs) {
        Array::operator=(rhs);
    }
    return *this;
}

bool SafeArray::operator==(const SafeArray& rhs) const {
    return Array::operator==(rhs);
}

int& SafeArray::operator[](int index) {
    assert(index >= 0 && index < size()); // Ensure index is within bounds
    return Array::operator[](index);
}

const int& SafeArray::operator[](int index) const {
    assert(index >= 0 && index < size()); // Ensure index is within bounds
    return Array::operator[](index);
}
