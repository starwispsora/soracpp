#ifndef SHAPE_H
#define SHAPE_H

class Shape 
{
private:
    int x_;
    int y_;


public:
    explicit Shape(int x =0, int y=0);
    //Shape(const Shape& rhs);
    //~Shape();
    //Shape& operator=(const Shape& rhs);

    void move(int x, int y);

    double area() const; // can't implement


};

#endif