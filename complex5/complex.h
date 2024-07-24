#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class complex; //instead of friend class
std::ostream& operator<<(std::ostream &out, const Complex &rhs);

class Complex
{
private:
    double re_; // re
    double im_;

public:
    //Complex();
    //Complex(double re);
    Complex(double re=0.0, double im=0.0);
    Complex(const Complex &rhs);
    ~Complex();

    Complex& operator=(const Complex &rhs);
    Complex& operator+=(const Complex &rhs);
    //Complex& operator-=(const Complex &rhs);
    //Complex& operator*=(const Complex &rhs);
    //%= X
   
    //&=, |=, ^=, <<=, >>= X 

    const Complex operator+(const Complex &rhs) const; //read only for its member variables
    //const Complex operator-(const Complex &rhs);
    //const Complex operator*(const Complex &rhs);
    //const Complex operator/(const Complex &rhs);

    //++, -- X(only be able to be used with integer)
    const Complex& operator++(); //prefix
    const Complex operator++(int); //postfix

    bool operator==(const Complex &rhs) const;
    bool operator!=(const Complex &rhs) const;
    //bool operator<(const Complex &rhs);
    //bool operator>(const Complex &rhs);
    //bool operator<=(const Complex &rhs);
    //bool operator>=(const Complex &rhs);

    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);


};

#endif // COMPLEX_H