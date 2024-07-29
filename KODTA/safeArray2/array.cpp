#include "array.h"

template <typename T>
int Array<T>::getArraySize() {
    return ARRAYSIZE;
}

template <typename T>
Array<T>::Array(int size)
: pArr_(new T[size]), size_(size) {
    assert(pArr_);
}

template <typename T>
Array<T>::Array(const T *pArr, int size)
: pArr_(new T[size]), size_(size) {
    assert(pArr_);
    std::memcpy(pArr_, pArr, size * sizeof(T)); // Correct type for memcpy
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
: pArr_(new T[rhs.size_]), size_(rhs.size_) {
    assert(pArr_);
    std::memcpy(pArr_, rhs.pArr_, size_ * sizeof(T)); // Correct type for memcpy
}

template <typename T>
Array<T>::~Array() {
    delete[] pArr_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
    if (this != &rhs) {
        delete[] pArr_;
        size_ = rhs.size_;
        pArr_ = new T[size_];
        assert(pArr_);
        std::memcpy(pArr_, rhs.pArr_, size_ * sizeof(T)); // Correct type for memcpy
    }
    return *this;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const {
    if (size_ != rhs.size_) {
        return false;
    }
    for (int i = 0; i < size_; ++i) {
        if (pArr_[i] != rhs.pArr_[i]) {
            return false;
        }
    }
    return true; // Return true if all elements are equal
}

template <typename T>
T& Array<T>::operator[](int index) {
    assert(index >= 0 && index < size_); // Ensure index is within bounds
    return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const {
    assert(index >= 0 && index < size_); // Ensure index is within bounds
    return pArr_[index];
}

template <typename T>
int Array<T>::size() const {
    return size_;
}
