#include "string.h"
#include <cassert>
#include <cstring>

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
    return out << rhs.str_;
}

String::String()
:str_(new char[1]), len_(0) 
{
    //str_ = new char[1];
    assert(str_);
    str_[0] = '\0';
    //len_ = 0;
}

String::String(const char* str) 
:str_(new char[strlen(str) + 1]), len_(strlen(str))
{
    //this->str_ = new  char[strlen(str) + 1];
    assert(str_); //this->  
    strcpy(str_, str);  //this-> 
    this->len_ = strlen(str);

    //len_ = strlen(str);
} 

String::String(const String& rhs)
:str_(new char[rhs.len_ + 1]), len_(rhs.len_)
{
    assert(str_);
    strcpy(str_, rhs.str_);
}  

String::~String() 
{
    delete[] str_; 
}

String& String::operator=(const String& rhs) 
{
    if (this == &rhs) //check for self-assignment
    {
        //deep copy
        delete[] str_; //1)delete old memory
        str_ = new char[rhs.len_ + 1]; //2)allocate new memory
        assert(str_); //check if allocation was successful
        strcpy(str_, rhs.str_); //3)copy the content(deep copy)
        len_ = rhs.len_; //3)copy the length
    }
    return *this;
}

bool String::operator==(const String& rhs) const
{
    return strcmp(str_, rhs.str_) == 0;
}

const String String::operator+(const String& rhs) const
{
    char buf[strlen(str_) + rhs.len_ + 1];
    strcpy(buf, str_);
    strcat(buf, rhs.str_);
    
    String result(buf);
    return result;
}

const char* String::c_str() const
{
    return str_;
}

int String::size() const
{
    return len_;
}