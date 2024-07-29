#ifndef ARRAY_H
#define ARRAY_H

#include <cstring> // For std::memcpy
#include <cassert> // For assert

template <typename T>
class Array {
private:
    T *pArr_;
    int size_;

public:
    static const int ARRAYSIZE = 100; // Define and initialize static const member

    static int getArraySize(); // Static member function

    explicit Array(int size = ARRAYSIZE); // Explicit constructor
    Array(const T *pArr, int size);
    Array(const Array<T>& rhs);
    virtual ~Array();

    Array<T>& operator=(const Array<T>& rhs);
    bool operator==(const Array<T>& rhs) const;

    T& operator[](int index);
    const T& operator[](int index) const;

    int size() const;
};

#include "array.cpp" // Include implementation

#endif // ARRAY_H
