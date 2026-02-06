/* Write a program to find the multiplication values and the
cubic values using the inline function. */

#include<iostream>
using namespace std;

inline int multi(int x,int y){
    return x*y;
}

inline int cube(int z){
    return z*z*z;
}

int main(){
    int a,b;
    cout << "Enter two number's: ";
    cin >> a >> b;
    
    cout << "Multiplication of two number is: " << multi(a,b) << endl;
    cout << "Cube of given number is: " << cube(a) << endl;
    cout << "Cube of given number is: " <<cube(b) << endl;
    
    return 0;
}

/*
Enter two number's: 4 5
Multiplication of two number is: 20
Cube of given number is: 64
Cube of given number is: 125
*/
