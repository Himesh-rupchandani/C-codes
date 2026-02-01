#include<iostream>
using namespace std;

float areaofc(float &r){
    return 3.141565*r*r;
}

float areaoft(float &base,float & height){
    return 0.5*base*height;
}

float areaofr(float &len,float &bre){
    return len*bre;
}

int main(){
    float r,base,height,len,bre;
    
    cout << "Enter a radius: ";
    cin >> r;
    
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    
    cout << "Enter length: ";
    cin >> len;
    cout << "Enter breadth: ";
    cin >> bre;
    
    
    
   cout << "Area of circle is: " << areaofc(r) << endl;
   cout << "Area of triangle is: " << areaoft(base,height) << endl;
   cout << "Area of rectangle is: " << areaofr(len,bre) << endl;
    
    return 0;
}

Enter a radius: 12
Enter base: 15
Enter height: 10
Enter length: 56
Enter breadth: 36
Area of circle is: 452.385
Area of triangle is: 75
Area of rectangle is: 2016
