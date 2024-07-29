#include "stack.h"
#include <cassert>
#include <cstring> // For memcpy

// Default constructor
Stack::Stack()
: stack_(nullptr), size_(0), tos_(0) {
}

// Parameterized constructor
Stack::Stack(int size)
: stack_(new char[size]), size_(size), tos_(0) {
    assert(stack_); // Ensure memory allocation was successful
}

// Copy constructor
Stack::Stack(const Stack& rhs)
: stack_(new char[rhs.size_]), size_(rhs.size_), tos_(rhs.tos_) {
    assert(stack_); // Ensure memory allocation was successful
    std::memcpy(stack_, rhs.stack_, size_);
}

// Destructor
Stack::~Stack() {
    delete[] stack_;
}

// Assignment operator
Stack& Stack::operator=(const Stack& rhs) {
    if (this != &rhs) {
        delete[] stack_; // Free existing resource

        size_ = rhs.size_;
        tos_ = rhs.tos_;
        stack_ = new char[size_];
        assert(stack_); // Ensure memory allocation was successful

        std::memcpy(stack_, rhs.stack_, size_);
    }
    return *this;
}

// Check if stack is empty
bool Stack::empty() const {
    return tos_ == 0;
}

// Check if stack is full
bool Stack::full() const {
    return tos_ == size_;
}

// Push an element onto the stack
void Stack::push(char data) {
    assert(!full()); // Ensure stack is not full
    stack_[tos_] = data;
    ++tos_;
}

// Pop an element from the stack
char Stack::pop() {
    assert(!empty()); // Ensure stack is not empty
    --tos_;
    return stack_[tos_];
}
