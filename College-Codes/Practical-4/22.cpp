// Write a program to define a class method outside the class definition.

#include<iostream>
using namespace std;

class student{
public:
  void display();  
};

void student::display(){
    cout << "My name is HImesh Rupchandani." << endl;
}

int main(){
    student s1;
    s1.display();
    
    
    return 0;
}

// My name is HImesh Rupchandani.
