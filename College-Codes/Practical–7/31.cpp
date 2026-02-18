// Develop a program to display the n terms of odd natural
// number and their sum.

#include<iostream>
using namespace std;

void display(int &n){
    cout << "N terms of odd natrual number is:" << endl;
    for(int i=1;i<=2*n;i+=2){
        cout << i << " ";
    }
    cout << endl;
       cout << "Sum of N number of odd natrual number: " << n*n << endl;
}


int main(){
    int n;
    cout << "Enter an number: ";
    cin >> n;
    
    display(n);
    
    return 0;
}

/*
Enter an number: 5
N terms of odd nutrual number is:
1 3 5 7 9 
Sum of N number of odd natrual number: 25
*/
