#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {
    friend std::ostream& operator<<(std::ostream &out, const Complex &rhs);
    friend std::istream& operator>>(std::istream &in, Complex &rhs); // Add this line

private:
    double re_;
    double im_;

public:
    Complex(double re = 0.0, double im = 0.0);
    Complex(const Complex &rhs);
    ~Complex();

    Complex& operator=(const Complex &rhs);
    Complex& operator+=(const Complex &rhs);

    const Complex operator+(const Complex &rhs) const;

    const Complex& operator++(); // Prefix increment
    const Complex operator++(int); // Postfix increment

    bool operator==(const Complex &rhs) const;
    bool operator!=(const Complex &rhs) const;

    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);
};

#endif // COMPLEX_H
