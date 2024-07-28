/*Inheritance
In C++, it is possible to inherit attributes and methods from one class to another. 

Why And When To Use "Inheritance"?
- It is useful for code reusability: 
reuse attributes and methods of an existing class when you create a new class.*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
