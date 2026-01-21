// Write a program to find out the sum of digits.

#include<iostream>
using namespace std;

int main(){
    int n,a,sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    
    while(n>0){
        a = n%10;
        sum = sum + a;
        n = n/10;
    }
    cout << "The sum of a digits is: " << sum << endl;
    
    return 0;
}

/* 
Enter the number: 153
The sum of a digits is: 9
*/
