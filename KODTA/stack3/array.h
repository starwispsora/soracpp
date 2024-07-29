#ifndef ARRAY_H
#define ARRAY_H


class Array {
static const int ARRAYSIZE;
private:
    int *pArr;
    int size;
public:
    explicit Array(int size= ARRAYSIZE); //explicit keyword to prevent implicit conversion //Array arr2 = 10; X
    Array(const int *pArr_, int size_);
    Array(const Array& rhs);
    ~Array();


    //Array() {}
    //Array(const Array& rhs) {//memberwise copy}
    //~Array() {}

    //Array& operator=(const Array& rhs) {//memberwise copy, return *this}

    //Array *operator&() { return this; }
    //const Array *operator&() const { return this; }


    Array& operator=(const Array& rhs);

    bool operator==(const Array& rhs) const;
    //bool operator!=(const Array& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;

    int size() const;

    
};
#endif