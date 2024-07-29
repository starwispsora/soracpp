#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
private:
    int width_;
    int height_;

public:
    //Rectangle (); X
    Rectangle(int x, int y, int w, int h);
    //Rectangle(const Rectangle& rhs); 
    //~Rectangle(); 
    //Rectangle& operator=(const Rectangle& rhs); 

    double area() const;
    double getDiagonal() const;
};

#endif