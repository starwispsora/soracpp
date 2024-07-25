#include "rational.h"
#include <cassert>
#include <iostream>

std::ostream& operator<<(std::ostream &out, const Rational &rhs)
{
    out << rhs.num << "/" << rhs.den;
    return out;
}
/*
Rational::Rational()
{
    // Constructor implementation
    this->num = 0;
    this->den = 1;  
}
{
    this->num = 0;
    this->den = 1;  
}
*/

Rational::Rational(int num, int den)
{
    assert(den != 0);
    this->num = num;
    this->den = den;
}

{
    this->num = 0;
    this->den = 1; 
}

Rational::Rational(int num, int den)
{
    assert(den != 0);
    this->num = num;
    this->den = den;
}   

Rational::Rational(const Rational &rhs)
{
    this->num = rhs.num;
    this->den = rhs.den;
}   

Rational::~Rational()
{
    // Nothing to do here   
} 

Rational &Rational::operator=(const Rational &rhs)
{
    this->num = rhs.num;
    this->den = rhs.den;
    return *this;
}

bool Rational::operator==(const Ratioanl& rhs)
{
    return (this->num == rhs.num) && (this->den == rhs.den);  
}

const Rational Rational::operator+(const Rational &rhs)
{
    Rational result(this->num * rhs.den + rhs.num * this->den, this->den * rhs.den);
    return result;
}