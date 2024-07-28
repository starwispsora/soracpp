#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
/*When a parameter is passed to the function, it is called an argument. 
So, from the example above: 
fname is a parameter, while Liam, Jenny and Anja are arguments.*/