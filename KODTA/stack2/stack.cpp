#include "stack.h"
#include <cassert>

// Define the static member
const int Stack::STACKSIZE = 100;

Stack::Stack(int size)
: pArr_(new int[size]), size_(size), tos_(0)
{
    assert(pArr_);
}

Stack::~Stack()
{
    delete [] pArr_;
}

void Stack::push(int data)
{
    assert(!full());
    pArr_[tos_] = data;
    ++tos_;
}

int Stack::pop()
{
    assert(!empty());
    --tos_;
    return pArr_[tos_]; // Fixed typo here
}

bool Stack::full() const
{
    return tos_ == size_;
}

bool Stack::empty() const
{
    return tos_ == 0;
}

// The copy constructor and assignment operator should be deleted to prevent copying
Stack::Stack(const Stack& rhs)
: pArr_(nullptr), size_(rhs.size_), tos_(rhs.tos_)
{
    pArr_ = new int[size_];
    assert(pArr_);
    for (int i = 0; i < tos_; ++i)
    {
        pArr_[i] = rhs.pArr_[i];
    }
}

Stack& Stack::operator=(const Stack& rhs)
{
    if (this != &rhs) {
        delete [] pArr_; // Free existing resource

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
