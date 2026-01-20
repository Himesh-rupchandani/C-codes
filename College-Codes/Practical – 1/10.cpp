// Write a program to find the factorial of numbers.

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Factorial of " << num << " is: " << fact(num);
    
    return 0;
}

/*
Enter a number: 6
Factorial of 6 is: 720
*/
