// Write a program to find the cube of number using function.

#include<iostream>
using namespace std;

int cube(int* a){
    return (*a)*(*a)*(*a);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Cube of " << n << " is: " << cube(&n) << endl;
    
    return 0;
}

/*
Enter a number: 4
Cube of 4 is: 64
*/
