#ifndef COMPLEX_H
#define COMPLEX_H
#include <ostream>

class Complex
{
friend std::ostream& operator<<(std::ostream &out, const Complex &rhs);


private:
    double re;
    double im;

public: 
    //Complex();
    //Complex(double re); //no need  this becase we have a default value(argument)
    Complex(double re = 0.0, double im = 0.0); //default value
    Complex(const Complex &rhs); //copy constructor
    ~Complex();

    Complex& operator=(const Complex &rhs); //copy assignment
    bool operator==(const Complex& rhs);

    const Complex operator+(const Complex &rhs);
    //-, *, /

};

#endif  