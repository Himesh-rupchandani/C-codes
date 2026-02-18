// Develop a program to find factors of the given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an number: ";
    cin >> n;
    
    for(int i=1;i<=n;i++){
        if(n%i==0) cout << i << " ";
    }
    
    return 0;
}

/*
Enter an number: 12
1 2 3 4 6 12 
*/
