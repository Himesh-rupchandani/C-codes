// Write a program to find GCD of two numbers using function.

#include<iostream>
using namespace std;

int GCD(int &n1,int &n2){
    int gcd = 1;
    if(n2>n1) swap(n1,n2);
    for(int i=1;i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
        return gcd;
}

int main(){
    int n1,n2;
    cout << "Enter any two number's: ";
    cin >> n1 >> n2;
    
    cout << "My GCD number is: " << GCD(n1,n2) << endl;
    
   
    return 0;
}

/*
Enter the numbers: 12 15
GCD number is: 3
  */

