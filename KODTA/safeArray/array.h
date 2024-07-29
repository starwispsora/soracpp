#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    static const int ARRAYSIZE = 100; // Initialize static const member here
    int *pArr_;
    int size_;

public:
    static int getArraySize(); // Static member function

    explicit Array(int size = ARRAYSIZE); // Explicit constructor
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    virtual ~Array();


    Array& operator=(const Array& rhs);
    bool operator==(const Array& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    int size() const;
};
#endif
