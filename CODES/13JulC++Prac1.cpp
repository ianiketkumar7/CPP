#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
union AccountData {
    struct {
        char accountHolderName[70];
        int accountNumber;
        double balance, deposit, withdraw;
    } data;
};

int main() {
    AccountData x;
    cout << "Name: ";
    cin.getline(x.data.accountHolderName, 70);
    cout << "Account Number: ";
    cin >> x.data.accountNumber;
    cout << "Balance: ";
    cin >> x.data.balance;
    cout << "Deposit amount: ";
    cin >> x.data.deposit;
    x.data.balance = x.data.balance + x.data.deposit;
    cout << "Amount deposited successfully." << endl;
    cout << "Withdraw amount: ";
    cin >> x.data.withdraw;
    if(x.data.balance >= x.data.withdraw) {
        x.data.balance = x.data.balance - x.data.withdraw;
        cout << "Amount withdrawn successfully." << endl;
    }
    else {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }

    cout << "Account details:\n";
    cout << "Account holder's name: " << x.data.accountHolderName << endl;
    cout << "Account number: " << x.data.accountNumber << endl;
    cout << "Balance: " << fixed << setprecision(2) << x.data.balance << endl;
}