// Write a program to find the area of circle,triangle and rectangle.

#include<iostream>
using namespace std;

float areaOfCircle(float* a){
    return 3.14*(*a)*(*a);
}

float areaOfTriangle(float *b,float *c){
    return (0.5*(*b)*(*c));
}

float areaOfRectangle(float *d,float *e){
    return (*d)*(*e);
}

int main(){
    float r,base,height,length,breadth;
    r = 5;
    base = 10;
    height = 12.5;
    length = 32.3;
    breadth = 25.6;
    
    cout << "Area of circle is: " << areaOfCircle(&r) << endl;
    cout << "Area of triangle is: " << areaOfTriangle(&base,&height) << endl;
    cout << "Area of rectangle is: " << areaOfRectangle(&length,&breadth) << endl;
    
    return 0;
}

/*
Area of circle is: 78.5
Area of triangle is: 62.5
Area of rectangle is: 826.88
*/
