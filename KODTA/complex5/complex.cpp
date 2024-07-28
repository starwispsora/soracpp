#include "complex.h"
#include <iostream>

std::ostream& operator<<(std::ostream &out, const Complex &rhs)
{
    out << "(" << rhs.real() << "," << rhs.imag() << "i)";
    return out;
}

std::istream& operator>>(std::istream &in, Complex &rhs)
{
    char ch; // to read parentheses and comma
    double re, im;

    in >> ch; // Read '('
    if (ch != '(') {
        in.setstate(std::ios::failbit);
        return in;
    }

    in >> re >> ch; // Read real part and comma
    if (ch != ',') {
        in.setstate(std::ios::failbit);
        return in;
    }

    in >> im >> ch; // Read imaginary part and ')'
    if (ch != 'i' && ch != ')') {
        in.setstate(std::ios::failbit);
        return in;
    }

    if (ch == 'i') {
        in >> ch; // Read the closing ')'
        if (ch != ')') {
            in.setstate(std::ios::failbit);
        }
    }

    rhs.real(re);
    rhs.imag(im);

    return in;
}

Complex::Complex(double re, double im)
: re_(re), im_(im) {}

Complex::Complex(const Complex &rhs)
: re_(rhs.re_), im_(rhs.im_) {}

Complex::~Complex() {}

Complex& Complex::operator=(const Complex &rhs)
{
    if (this != &rhs) { // Self-assignment check
        re_ = rhs.re_;
        im_ = rhs.im_;
    }
    return *this;
}

Complex& Complex::operator+=(const Complex &rhs)
{
    re_ += rhs.re_;
    im_ += rhs.im_;
    return *this;
}

const Complex Complex::operator+(const Complex &rhs) const
{
    return Complex(re_ + rhs.re_, im_ + rhs.im_);
}

const Complex& Complex::operator++()
{
    ++re_;
    return *this;
}

const Complex Complex::operator++(int)
{
    Complex tmp(*this);
    ++re_;
    return tmp;
}

bool Complex::operator==(const Complex &rhs) const
{
    return (re_ == rhs.re_) && (im_ == rhs.im_);
}

bool Complex::operator!=(const Complex &rhs) const
{
    return !(*this == rhs);
}

double Complex::real() const
{
    return re_;
}

double Complex::imag() const
{
    return im_;
}

void Complex::real(double re)
{
    re_ = re;
}

void Complex::imag(double im)
{
    im_ = im;
}
