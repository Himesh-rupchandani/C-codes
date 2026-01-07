#include<iostream>
using namespace std;
int main(){
    int n,a=65;
    cout << "Enter the number: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << char(j+a) << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/* Enter the number: 4
A 
A B 
A B C 
A B C D */
