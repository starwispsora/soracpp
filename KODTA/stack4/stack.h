#ifndef STACK_H
#define STACK_H
#include "array.h"

templete <typename T>
class Stack {
private:
    static const int STACKSIZE; // Fixed typo here
    int *pArr_;
    int size_;
    Array<T> arr_; //has-a relationship
    int tos_;

    Stack(const Stack<T>& rhs); // Copy constructor is private
    Stack<T>& operator=(const Stack<T>& rhs); // Assignment operator is private

public:
    explicit Stack(int size = STACKSIZE); // Default constructor
    ~Stack(); // Destructor

    void push(const T& data);
    const T pop(); //why const? : Because it doesn't change the object

    bool full() const;
    bool empty() const;
};

#include <cassert>

templete <typename T>
const int Stack<T>::STACKSIZE = 100;

templete <typename T>
Stack<T>::Stack(int size)
: arr_(size), tos_(0)
{
    
}
templete <typename T>
Stack<T>::~Stack()
{
    //arr_.~Array(); // be called automatically
}
templete <typename T>
void Stack<T>::push(int data)
{
    assert(!full());
    arr_[tos_] = data;
    ++tos_;
}
templete <typename T>
const T Stack<T> ::pop()
{
    assert(!empty());
    --tos_;
    
    return arr_[tos_]; // Fixed typo here
}
templete <typename T>
bool Stack<T>::full() const
{
    
    return tos_ == arr_.size();
}
templete <typename T>
bool Stack<T>::empty() const
{
    return tos_ == 0;
}

templete <typename T>
Stack<T>::Stack(const Stack<T>& rhs)
: pArr_(nullptr), size_(rhs.size_), tos_(rhs.tos_)
{
    pArr_ = new int[size_];
    assert(pArr_);
    for (int i = 0; i < tos_; ++i)
    {
        pArr_[i] = rhs.pArr_[i];
    }
}
templete <typename T>
Stack& Stack<T>::operator=(const Stack<T>& rhs)
{
    if (this != &rhs) {
        delete [] pArr_; 

        size_ = rhs.size_;
        tos_ = rhs.tos_;
        pArr_ = new int[size_];
        assert(pArr_);

        for (int i = 0; i < tos_; ++i) {
            pArr_[i] = rhs.pArr_[i];
        }
    }
    return *this;
}

#endif
