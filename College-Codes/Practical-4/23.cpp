//Write a program to add two integers using class.

#include<iostream>
using namespace std;

class sum{
  int a,b;
  
    public:
    void input(){
      cout << "Enter any two number's: ";
      cin >> a >> b;
    }
    
    void output(){
      cout << "Sum of two number is: " << a+b << endl;
    }
    
};

int main(){
    sum addition;
    
    addition.input();
    addition.output();
    
    return 0;
}

/*
Enter any two number's: 12 15
Sum of two number is: 27
*/
