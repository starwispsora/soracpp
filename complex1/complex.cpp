#include <iostream>

class Complex
{
private:
    double re;
    double im;
public:
    Complex();
    Complex(double re);
    Complex(double re, double im);
    ~Complex();

    void assign(Complex c);
    void assign2(const Complex *pc);
    void assign3(const Complex &rc);

    bool equals(const Complex &rc);

    double real();
    double imag();

    void real(double re);
    void imag(double im);
};

Complex::Complex()
{
    this->re = 0.0;
    this->im = 0.0;
}

Complex::Complex(double re)
{
    this->re = re;
    this->im = 0.0;
}

Complex::Complex(double re, double im)
{
    this->re = re;
    this->im = im;
}

Complex::~Complex()
{

}

void Complex::assign(Complex c)
{
    this->re = c.re;
    this->im = c.im;
}

void Complex::assign2(const Complex *pc)
{
    this->re = pc->re;
    this->im = pc->im;
}

void Complex::assign3(const Complex &rc)
{
    this->re = rc.re;
    this->im = rc.im;
}

bool Complex::equals(const Complex &rc)
{
    return this->re == rc.re && this->im == rc.im;
}

double Complex::real()
{
    return this->re;
}

double Complex::imag()
{
    return this->im;
}

void Complex::real(double re)
{
    this->re = re;
}

void Complex::imag(double im)
{
    this->im = im;
}

int main()
{
    Complex c1;
    Complex c2(1.0, 2.0);
    c1.assign(c2);

    if (c1.equals(c2))
    {
        std::cout << "c1 equals c2" << std::endl;
    }
    else
    {
        std::cout << "c1 does not equal c2" << std::endl;
    }

    return 0;
}
