#include "array.h"
#include <cassert>
#include <cstring> // For std::memcpy

int Array::getArraySize() {
    return ARRAYSIZE;
}

Array::Array(int size)
: pArr_(new int[size]), size_(size) {
    assert(pArr_);
}

Array::Array(const int *pArr, int size)
: pArr_(new int[size]), size_(size) {
    assert(pArr_);
    std::memcpy(pArr_, pArr, size * sizeof(int));
}

Array::Array(const Array& rhs)
: pArr_(new int[rhs.size_]), size_(rhs.size_) {
    assert(pArr_);
    std::memcpy(pArr_, rhs.pArr_, size_ * sizeof(int));
}

Array::~Array() {
    delete[] pArr_;
}

Array& Array::operator=(const Array& rhs) {
    if (this != &rhs) {
        delete[] pArr_;
        size_ = rhs.size_;
        pArr_ = new int[size_];
        assert(pArr_);
        std::memcpy(pArr_, rhs.pArr_, size_ * sizeof(int));
    }
    return *this;
}

bool Array::operator==(const Array& rhs) const {
    if (size_ != rhs.size_) {
        return false;
    }
    for (int i = 0; i < size_; ++i) {
        if (pArr_[i] != rhs.pArr_[i]) {
            return false;
        }
    }
    return true;
}

int& Array::operator[](int index) {
    return pArr_[index];
}

const int& Array::operator[](int index) const {
    return pArr_[index];
}

int Array::size() const {
    return size_;
}
