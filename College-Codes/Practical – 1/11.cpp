// Write a program to reverse the given numbers. 

#include<iostream>
using namespace std;

int main(){
    int n,org,rev=0;
    cout << "Enter a number: ";
    cin >> n;
    
    while(n>0){
        rev = (rev*10) + n%10;
        n = n/10;
    }
    cout << "The Reverse of a number is: " << rev << endl;
    
    return 0;
}

/*
Enter a number: 466
The Reverse of a number is: 664
*/
