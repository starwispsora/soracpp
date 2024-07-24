#include "rational.h"   
//write


Rational::~Rational()
{
}

Rational& Rational::operator=(const Rational& rhs) {
    this->num = rhs.num;    
    this->den = rhs.den;

    return *this;
}   

bool Rational::operator==(const Rational& rhs) {
    return this->num == rhs.num && this->den
}

const Rational Rational::operator+(const Rational& rhs) {
    Rational result(this->num * rhs.den + this->den * rhs.num, this->den * rhs.den);//3/4 + 2/5 = 15/20 + 8/20 = 23/20  

    return result;
}

const Rational Rational::operator-(const Rational& rhs) {
    Rational result(this->num * rhs.den - this->den * rhs.num, this->den * rhs.den);

    return result;
}   

const Rational Rational::operator*(const Rational& rhs) {
    Rational result(this->num * rhs.num, this->den * rhs.den); // Multiply the numerator of the first rational number with the numerator of the second rational number, and multiply the denominator of the first rational number with the denominator of the second rational number.

    return result;
}

const Rational Rational::operator/(const Rational& rhs) {
    Rational result(this->num * rhs.den, this->den * rhs.num); // Multiply the numerator of the first rational number with the denominator of the second rational number, and multiply the denominator of the first rational number with the numerator of the second rational number.

    return result;
}

int Rational::getNum() {
    return this->num;
}   


//write