// Write a program to find GCD of two numbers using function.

#include<iostream>
using namespace std;

int main(){
    int n1,n2,gcd = 1;
    cout << "Enter the numbers: ";
    cin >> n1 >> n2;
    
    if(n2>n1){
        swap(n1,n2);
    }
    
    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    
    cout << "GCD number is: " << gcd << endl;
    
    return 0;
}

/*
Enter the numbers: 12 15
GCD number is: 3
  */

