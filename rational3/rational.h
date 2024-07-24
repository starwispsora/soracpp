#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
    Rational();
    Rational(int num);
    Rational(int num, int den);
    ~Rational();    

    Rational& operator=(const Rational& rhs);
    bool operator==(const Rational& rhs); 

    const Rational operator+(const Rational& rhs);
    const Rational operator-(const Rational& rhs);
    const Rational operator*(const Rational& rhs);
    const Rational operator/(const Rational& rhs);

    int getNum();
    int getDen();   

    void setNum(int num);
    void setDen(int den);   

private:
    int num;
    int den;
};

#endif // RATIONAL_H