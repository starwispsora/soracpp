#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack {
private:
    static const int STACKSIZE;
    Array<T> arr_; // has-a relationship
    int tos_;

    Stack(const Stack<T>& rhs); // Copy constructor
    Stack<T>& operator=(const Stack<T>& rhs); // Assignment operator

public:
    explicit Stack(int size = STACKSIZE); // Default constructor
    ~Stack(); // Destructor

    void push(const T& data);
    T pop();

    bool full() const;
    bool empty() const;
};

#include <cassert>

template <typename T>
const int Stack<T>::STACKSIZE = 100;

template <typename T>
Stack<T>::Stack(int size)
: arr_(size), tos_(0)
{
}

template <typename T>
Stack<T>::~Stack()
{
    // The Array destructor will be called automatically
}

template <typename T>
void Stack<T>::push(const T& data)
{
    assert(!full());
    arr_[tos_] = data;
    ++tos_;
}

template <typename T>
T Stack<T>::pop()
{
    assert(!empty());
    --tos_;
    return arr_[tos_];
}

template <typename T>
bool Stack<T>::full() const
{
    return tos_ == arr_.size();
}

template <typename T>
bool Stack<T>::empty() const
{
    return tos_ == 0;
}

template <typename T>
Stack<T>::Stack(const Stack<T>& rhs)
: arr_(rhs.arr_), tos_(rhs.tos_)
{
    // Copy the array and the top of stack
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
    if (this != &rhs) {
        arr_ = rhs.arr_; // Array's assignment operator handles the copy
        tos_ = rhs.tos_;
    }
    return *this;
}

#endif // STACK_H
