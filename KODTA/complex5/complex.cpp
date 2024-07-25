#include "complex.h"

std::ostream& operator<<(std::ostream &out, const Complex &rhs)
{
    out << "(" << rhs.real() << "," << rhs.imag() << "i)";
    return out;
}
/*
Complex::Complex()
: re_(0.0), im_(0.0) // constructor initializer list
{
    // re_ = 0.0;
    // im_ = 0.0;
}

{
    re_ = 0.0;
    im_ = 0.0;
}


Complex::Complex(double re)
: re_(re), im_(0.0)

{
    re_ = re;
    im_ = 0.0;
}
*/

Complex::Complex(double re, double im) 
: re_(re), im_(im){}
/*
{
    re_ = re; //re_=re;
    im_ = im; //im_=im;
}
*/

Complex::Complex(const Complex &rhs)
: re_(rhs.re_), im_(rhs.im_)  {}
/*
{
    re_ = rhs.re_;
    im_ = rhs.im_;
}   
*/

Complex::~Complex()
{

}

Complex& Complex::operator=(const Complex &rhs)
{
    re_ = rhs.re_;
    im_ = rhs.im_;
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
    Complex result(re_ + rhs.re_, im_ + rhs.im_);
    return result;
}


//for increment overloading practice
const Complex& Complex::operator++() //when returning myself, it should be reference(&)
{
    re_= re_+1.0;
    return *this;
}

const Complex Complex::operator++(int)
{
    Complex tmp(*this);
    re_= re_+1.0;
    return tmp;
}



bool Complex::operator==(const Complex &rhs) const
{
    return (re_ == rhs.re_) && (im_ == rhs.im_);
}

bool Complex::operator!=(const Complex &rhs) const
{
    //!this->operator==(rhs);
    return re_ != rhs.re_ || im_ != rhs.im_;
}

double Complex::real() const
{
    return re_; //= this->re_;
}

double Complex::imag() const // read only member function
{
    return im_; //= this->im_;
}

void Complex::real(double re)
{
    re_ = re; //= this->re_ = re;
}   

void Complex::imag(double im)
{
    im_ = im; //= this->im_ = im;
}