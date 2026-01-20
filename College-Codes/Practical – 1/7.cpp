// Write a program to check whether prime number or not.

#include<iostream>
using namespace std;

int main(){
    int n,a=0;
    cout << "Enter the number: ";
    cin >> n;
    if(n==0 || n==1) a = 0;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(a==1) cout << "The number is not a prime number.";
    else cout << "The number is prime number.";
    return 0;
}

/*
Enter the number: 7
The number is prime number.
*/
