// Write a program to swapping of 2 numbers.

#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    cout <<"Enter two number: ";
    cin >> a >> b;
    
    cout  << "a and b is " << a << " and " << b << " before swap." << endl;
    swap(&a,&b);
    cout << "a and b is " << a << " and " << b << " after swap." << endl;
    return 0;
}
/*
Enter two number: 88 66
a and b is 88 and 66 before swap.
a and b is 66 and 88 after swap.
*/
