// I know if i'm using swap(a,b) then it's work same but still this is good for knowleage.

#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    a = (a+b) - (b=a);
    cout << a << " & " << b << endl;
    
    return 0;
}

// 20 & 10
