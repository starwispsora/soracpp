#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
    char *str_;
    int  len_;

public://6 things automatically provided by the compiler
    String();
    String(const  char *str);
    String(const String& rhs);
    ~String();

    String& operator=(const String& rhs);
    //String &operator=(const char *str);
    //-=, *=, /=, %=

    bool operator==(const String& rhs) const;
    //bool operator!=(const String& rhs) const;
    //>,<,>=,<=

    const String operator+(const String& rhs) const;
    //-, *, /, %

    //String();
    //String(const String& rhs){//memberwise copy}
    //~String();
    //String& operator=(const String& rhs){//memberwise copy, return *this}
    //String *operator&(){return this;}
    //const String *operator&() const {return this;}

    const char* c_str() const;
    int size() const;
};

#endif