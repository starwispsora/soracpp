#include "rational.h"
#include <cassert>
#include <iostream>

std::ostream& operator<<(std::ostream &out, const Rational &rhs)
{
    out << rhs.num << "/" << rhs.den;
    return out;
}

Rational::Rational(int num, int den) : num(num), den(den) {
    assert(den != 0);
}

Rational::Rational(const Rational &rhs) : num(rhs.num), den(rhs.den) {}

Rational::~Rational() {
    // Nothing to do here
}

Rational &Rational::operator=(const Rational &rhs) {
    if (this != &rhs) { // Check for self-assignment
        num = rhs.num;
        den = rhs.den;
    }
    return *this;
}

bool Rational::operator==(const Rational &rhs) const {
    return (num == rhs.num) && (den == rhs.den);
}

Rational Rational::operator+(const Rational &rhs) const {
    return Rational(num * rhs.den + rhs.num * den, den * rhs.den);
}
