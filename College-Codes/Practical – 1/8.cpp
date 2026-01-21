// Write a program to check whether palindrome or not. 

#include<iostream>
using namespace std;

int main(){
    int n,org,rev=0;
    cout << "Enter a number: ";
    cin >> n;
    org = n;
    while(n>0){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    if(org==rev) cout << "The number is palindrome number.";
    else cout << "The number is not a palindrome number.";
    
    
    return 0;
}

/*
Enter a number: 212
The number is palindrome number.
*/
