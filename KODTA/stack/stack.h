#ifndef STACK_H
#define STACK_H

class Stack {
private:
    char *stack_;
    int size_;
    int tos_; // top of stack index

public:
    Stack(); // Default constructor
    Stack(int size); // Parameterized constructor
    Stack(const Stack& rhs); // Copy constructor
    ~Stack(); // Destructor

    Stack& operator=(const Stack& rhs); // Assignment operator

    bool empty() const; // Check if stack is empty
    bool full() const; // Check if stack is full
    void push(char data); // Push an element onto the stack
    char pop(); // Pop an element from the stack
};

#endif
