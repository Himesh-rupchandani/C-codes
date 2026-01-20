// Write a program to find the Sum of natural numbers.

#include<iostream>
using namespace std;

int sumOfNum(int n){
    return (n*(n+1))/2;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    cout << "The sum of N number is: " << sumOfNum(num) << endl;
    
    return 0;
}

/*
Enter the number: 6
The sum of N number is: 21
*/
