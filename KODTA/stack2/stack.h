#ifndef STACK_H
#define STACK_H

class Stack {
private:
    static const int STACKSIZE; // Fixed typo here
    int *pArr_;
    int size_;
    int tos_;

    Stack(const Stack& rhs); // Copy constructor is private
    Stack& operator=(const Stack& rhs); // Assignment operator is private

public:
    explicit Stack(int size = STACKSIZE); // Default constructor
    ~Stack(); // Destructor

    void push(int data);
    int pop();

    bool full() const;
    bool empty() const;
};

#endif
