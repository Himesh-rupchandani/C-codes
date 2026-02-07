// Write a code for read and print student information using class.

#include<iostream>
using namespace std;

class student{
    
  string name;
  int age;
  float cgpa;
  
  public:
  void input(){
      cout << "Enter a name of student: ";
      cin >> name;
      cout << "Enter "<< name <<"'s age: ";
      cin >> age;
      cout << "Enter "<< name <<"'s cgpa: ";
      cin >> cgpa;
      cout << endl;
  }
  
  void output(){
      cout << "name = " << name << endl;
      cout << "Age = " << age << endl;
      cout << "cgpa = " << cgpa << endl;
      cout << endl;
  }     
};

int main(){
    student himesh,rudra,jenil;
    
    himesh.input();
    himesh.output();
    
    rudra.input();
    rudra.output();
    
    jenil.input();
    jenil.output();
    
    return 0;
}

/*
Enter a name of student: Himesh
Enter Himesh's age: 17
Enter Himesh's cgpa: 9.47

name = Himesh
Age = 17
cgpa = 9.47

Enter a name of student: Rudra
Enter Rudra's age: 19
Enter Rudra's cgpa: 8.42

name = Rudra
Age = 19
cgpa = 8.42

Enter a name of student: Jenil
Enter Jenil's age: 17
Enter Jenil's cgpa: 8.47

name = Jenil
Age = 17
cgpa = 8.47
*/
