#ifndef SHAPE_H
#define SHAPE_H

//if we want to access x_ and y_ in derived classes directly
//ABC Abstact Base Class = can make pointer, reference, but can't make object


class Shape 
{
private:
//protected: 
    int x_;
    int y_;


public:
    explicit Shape(int x =0, int y=0);
    //Shape(const Shape& rhs);
    virtual ~Shape();
    //Shape& operator=(const Shape& rhs);

    void move(int x, int y);

    virtual double area() const = 0; // i can't implement you derives should, pure virtual function
};

#endif