/*
#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational {
public:
    Rational();
    Rational(int num);
    Rational(int num, int den);
    ~Rational();    

    Rational& operator=(const Rational& rhs);
    bool operator==(const Rational& rhs); 

private:
    int num;
    int den;
};

#endif // RATIONAL_H
*/
#ifndef RATIONAL_H
#define RATIONAL_H
#include <cassert> // Include assert header for validation

class Rational {
private:
    int num; // Numerator
    int den; // Denominator

public:
    // Constructors, other methods, and member variables...
    Rational();
    Rational(int num);
    Rational(int num, int den);
    ~Rational();    

    Rational& operator=(const Rational& rhs);
    bool operator==(const Rational& rhs); 

    // Getter for the denominator
    int getDen() const {
        return this->den;
    }

     // Getter for the numerator
    int getNum() const
    {
        return this->num;
    }

    // Setter for the numerator
    void setNum(int num) {
        this->num = num;
    }

    // Improved setter for the denominator
    void setDen(int den) {
        assert(den != 0); // Ensure denominator is not zero
        if (den < 0) {
            // Normalize: Make denominator positive, adjust numerator sign
            this->den = -den;
            this->num = -this->num;
        } else {
            this->den = den;
        }
    }

    // Other methods...
};

#endif // RATIONAL_H