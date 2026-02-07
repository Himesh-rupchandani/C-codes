// Write a code to check whether a no is Prime or not using class.




#include<iostream>
using namespace std;

class prime{
  int n;
  bool a = true;
  
  public:
  void input(){
      cout << "Enter a number: ";
      cin >> n;
  }
  void check(){
      if(n==0 || n==1) a = false;
      for(int i=2;i<n;i++){
          if(n%i==0){
              a = false;
              break;
          }
      }
        if(a==true) cout << "Number is prime number.";
        else cout << "Number is not a prime number.";
  }
  
};

int main(){
   prime number;  

   number.input();
   number.check();
    
    return 0;
}

/*
Enter a number: 5
Number is prime number.
*/
