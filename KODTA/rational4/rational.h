#ifdef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational {
friend std::ostream& operator<<(std::ostream &out, const Rational &rhs);

private:
    int num;
    int den;
    

public:
   // Rational();
    //Rational(int num);
    Rational(int num =0, int den = 1); 
    Rational(const Rational &rhs);
    ~Rational();
    
    Rational &operator=(const Rational &rhs);

    bool operator==(const Rational &rhs);

    const Rational operator+(const Rational &rhs);
};

#endif // RATIONAL_H