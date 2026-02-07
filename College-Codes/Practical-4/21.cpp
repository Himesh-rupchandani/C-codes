//Write a program to create class methods inside the class definition.

#include<iostream>
using namespace std;

class student{
  string name;
  int age;
  
  public:
  void input(){
      cout << "Enter name of a student: ";
      cin >> name;
      cout << "Enter Age of a student: ";
      cin >> age;
      cout << endl;
  }
  void output(){
      cout << "Name of student is: " << name << endl;
      cout << "Age of student is: " << age << endl;
  }
};

int main(){
    student s1;
    
    s1.input();
    s1.output();
  
    return 0;
}
/*
Enter name of a student: Himesh
Enter Age of a student: 17

Name of student is: Himesh
Age of student is: 17
*/
