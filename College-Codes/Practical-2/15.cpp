// Write a program to convert Fahrenheit to centigrade and centigrade to Fahrenheit using function.

#include<iostream>
using namespace std;

float fToC(float* f){
    return (*f-32)*5.0/9.0;
}

float cToF(float* c){
    return ((*c)*9.0/5.0) + 32;
}

int main(){
    float f = 98.6,c = 37;
    
    cout << "Fahrenheit to Centigrade is: " << fToC(&f) << endl;
    cout << "Centigrade to Fahrenheit is: " << cToF(&c) << endl;
    
    return 0;
}

/*
Fahrenheit to Centigrade is: 37
Centigrade to Fahrenheit is: 98.6
  */
