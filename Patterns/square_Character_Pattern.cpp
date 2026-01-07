#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=0;i<n;i++){
        int a = 65;
        for(int j=0;j<n;j++){
            cout << char(j+a);
        }
        cout << endl;
    }
    return 0;
}

/* Enter the number: 4
ABCD
ABCD
ABCD
ABCD */
