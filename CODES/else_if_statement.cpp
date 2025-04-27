#include<iostream>
using namespace std;
int main(){
    int amt;
    int tax;
    int remaining_amt;
    cout << "Enter your amount: ";
    cin >> amt;
    if(amt < 100000){
        cout << "No Tax aplicable." << endl;
    } else if(amt > 100000 && amt <= 500000){
        tax = amt*10/100;
        remaining_amt = amt - tax;
        cout << "Tax Amount: " << tax << endl;
        cout << "Leftover Money = " << remaining_amt << endl;
    }else if(amt > 500000 && amt <= 1000000){
        tax = amt * 20 / 100;
        remaining_amt = amt - tax;
        cout << "Tax Amount: " << tax << endl;
        cout << "Leftover Money = " << remaining_amt << endl;
    }else{
        tax = amt * 40 / 100;
        remaining_amt = amt - tax;
        cout << "Tax Amount: " << tax << endl;
        cout << "Leftover Money = " << remaining_amt << endl;
    }
}