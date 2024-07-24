#include "rational.h"   
#include <cassert>
#include "../rational3/rational.h"

Rational::Rational() {
    this->num = 0;
    this->den = 1;
}  

Rational::Rational(int num) {
    this->num = num;
    this->den = 1;
}

Rational::Rational(int num, int den)
{
    assert(den != 0);
    this->num = num;
    this->setDen(den);
}

Rational::~Rational()
{
}

Rational& Rational::operator=(const Rational& rhs) {
    this->num = rhs.num;    
    this->den = rhs.den;

    return *this;
}   

bool Rational::operator==(const Rational& rhs) {
    return this->num == rhs.num && this->den == rhs.den;
}

int Rational::getNum() const {
    return this->num;
}   

int Rational::getDen() const {
    return this->den;
}

void Rational::setNum(int num) {
    this->num = num;
}

void Rational::setDen(int den)
{
    assert(den != 0);
    this->den = den;
}