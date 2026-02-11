// Write a program to demonstrate the concept of
// Destructor.

#include<iostream>
using namespace std;

class car{
public:
  car(){
      cout << "Constructor work successfully.." << endl;
  }  
  ~car(){
      cout << "Destructor work successfully.." << endl;
  }
};

int main(){
    
    car s1;
    
    return 0;
}
/*
Constructor work succesfully..
Destructor work succefully..
*/
