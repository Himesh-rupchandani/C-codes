 //Billing System.

#include<iostream>
#include<iomanip>
using namespace std;

void print(){
    for(int i=1;i<=60;i++){
        cout << "=";
    }
    cout << endl;
}

void print1(){
    for(int i=1;i<=60;i++){
        cout << "-";
    }
    cout << endl;
}

int main(){
     int totalItem;
     double totalTax = 0,grandTotal = 0;
     string name;

     cout << "Enter Name of Customer: ";
     getline(cin,name);
     cout << endl ;
     cout << "Enter an Number for Total Item: ";
     cin >> totalItem;;
     string names[100];
     int qty[100];
     float Price[100];
     float tax = 0.18;
     float amount[100];

     for(int i=0;i<totalItem;i++){
         cin.ignore(1000,'\n');
         cout << "Name of Item-" << i+1 <<": ";
         getline(cin,names[i]);
         cout << "Quenty of Item-" << i+1 << ": ";
         cin >> qty[i];
         cout << "Price of "<< names[i] << " Item: $";
         cin >> Price[i];
         cout << endl;
         
         amount[i] = Price[i] * qty[i] + (Price[i]*tax);
     }
    print();
    cout << "                        BILL SUMMARY                        " << endl;
    print();
    cout << "SIMARAN ENTERPRISE                 INVOICE DATE: "<< __DATE__ << endl;
    cout << "SINDHI-COLONY,RAJKOT               INVOICE TIME: "<< __TIME__ << endl;
    cout << "Phone:+91 8866096042               GSTIN: 08AALCRCR2857A1ZDH" << endl;
    print1();
    cout << setw(12) << "ITEMS   ";
    cout << setw(8) << "QTY  ";
    cout << setw(15) << "PRICE/UNIT";
    cout << setw(13) << "TAX/UNIT";
    cout << setw(12) << "AMOUNT" << endl;
    print1();
    
    for(int i=0;i<totalItem;i++){
        cout << left << setw(12) << names[i] << "   ";
        cout << left << setw(8) << qty[i] << "     ";
        cout << left << setw(13) << Price[i] << " ";
        cout << left << setw(13) << tax;
        cout << left << setw(12) << amount[i] << endl;
    }


    cout << "\n\n\n\n\n\n\n";
    return 0;
}
