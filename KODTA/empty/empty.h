#ifndef EMPTY_H
#define EMPTY_H

class Empty 
{
private :

public:
    //Empty() {};   //A / default constructor / if there is other constructor, default constructor will not be created
    //Empty(const Empty &rhs) {//memberwise copy constructor}; //B / copy constructor 
    //~Empty() {};  //default destructor

    //Empty& operator=(const Empty &rhs) {//memberwise copy; return *this;} //copy assignment operator 

    //Empty* operator&() {return  this;} //address of operator / E
    //const Empty* operator&() const {return this;} //address of operator / F
};

#endif