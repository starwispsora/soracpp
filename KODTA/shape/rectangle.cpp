#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(int x, int y, int w, int h)
:Shape(x, y), width_(w), height_(h) //is a
{

}

double Rectangle::area() const
{
    return width_ * height_;
}

double Rectangle::getDiagonal() const
{
    return sqrt(width_ * width_ + height_ * height_);
}