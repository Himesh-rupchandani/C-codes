/* Write a program for doing arithmetic operations using function that program includes the following functions
– Addition, Subtraction,Multiplication, Division and Modulus. */

#include<iostream>
using namespace std;

int sum(int* a,int* b){
    return *a + *b;
}

int sub(int*a , int* b){
    return *a - *b;
}

int multi(int* a,int* b){
    return (*a) * (*b);
}

float div(int* a,int* b){
    return (float)*a / *b;
}

int mod(int* a,int* b){
    return *a % *b;
}

int main(){
    int a,b;
    cout << "Enter a numbers: ";
    cin >> a >> b;
    
    cout << "Sum of a and b is: " << sum(&a,&b) << endl;
    cout << "Subtraction of a and b is: " << sub(&a,&b) << endl;
    cout << "Multiplication of a and b is: " << multi(&a,&b) << endl;
    if(b!=0)cout << "Division of a and b is: " << div(&a,&b) << endl;
    else cout << "Division by Zero is not allowed." << endl;
    
    if(b!=0)cout << "Modulus of a and b is: " << mod(&a,&b) << endl;
    else cout << "Modulus by zero is not allowed." << endl;
    
    return 0;
}

/* 
Enter a numbers: 2 3        (1-output)
Sum of a and b is: 5
Subtraction of a and b is: -1
Multiplication of a and b is: 6
Division of a and b is: 0.666667
Modulus of a and b is: 2

Enter a numbers: 5 0        (2-output)
Sum of a and b is: 5
Subtraction of a and b is: 5
Multiplication of a and b is: 0
Division by Zero is not allowed.
Modulus by zero is not allowed.
  */
