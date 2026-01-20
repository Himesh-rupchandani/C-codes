// Write a program to find the odd or even number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n%2==0) cout << "The number is Even number.";
    else cout << "The number is odd number.";
    
    return 0;
}

/*
Enter a number: 4
The number is Even number.
*/
