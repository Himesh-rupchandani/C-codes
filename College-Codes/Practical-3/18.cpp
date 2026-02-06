// Write a C++ program to find Square of a number using inline function.

#include<iostream>
using namespace std;

inline int square(int n){
    return n*n;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "My squre of a number is: " << square(n) << endl; 
    
    
    return 0;
}

/*
Enter a number: 12
My squre of a number is: 144
*/
