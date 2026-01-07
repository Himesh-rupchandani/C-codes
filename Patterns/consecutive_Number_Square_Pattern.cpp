#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}

/* Enter the number: 3
1 2 3 
4 5 6 
7 8 9 */
