// Write a program to check whether leap year or not.

#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    
    if((year%4==0 && year%100!=0) || year%400==0){
        cout << "The Year is a Leap year.";
    }
    else cout << "The Year is not a Leap year.";
    
    return 0;
}

/*
Enter a year: 2026
The Year is not a Leap year.
*/
