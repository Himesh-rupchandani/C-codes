//Butterfly pattern code it's most important 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number for total lines: ";
    cin >> n;
    
    for(int i=0;i<n;i++){
        //Top part
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
     }    
        //Bottom part
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout << "*";
            }
            if(i!=0){
                for(int j=0;j<i;j++){
                    cout << " ";
                }
            }
            if(i!=0){
                for(int j=0;j<i;j++){
                    cout << " ";
                }
            }
             for(int j=0;j<n-i;j++){
            cout << "*";
             }
             cout << endl;
        }
            return 0;
}

/* Enter the number for total lines: 7
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            *    */
  
