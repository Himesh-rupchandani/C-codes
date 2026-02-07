// Write a C++ program to calculate the area of circle,rectangle and triangle using function overloading.

#include<iostream>
using namespace std;

double area(double r){
    return 3.141592*r*r;
}
double area(double l,double b){
    return l*b;
}
double area(double b,double h,int){
    return 0.5*b*h;
}

int main(){
    cout << "Area of Circle is: " << area(5) << endl;
    cout << "Area of Rectangle is: " << area(5.68,8.95) << endl;
    cout << "Area of Triangle is: " << area(7.54,9.23,0) << endl;
    
    
    return 0;
}
/*
Area of circle is: 78.5398
Area of rectangle is: 50.836
Area of circle is: 34.7971
*/
