#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
union AccountData {
    struct {
    char accountHolderName[50];
    int accountNumber;
    double balance;
    double depositAmount, withdrawAmount;   
} data;
};

int main() {
AccountData account;
cin.getline(account.data.accountHolderName, 50);
cin >> account.data.accountNumber;
cin >> account.data.balance;
cin >> account.data.depositAmount;
account.data.balance = account.data.balance+account.data.depositAmount;
cout << "Amount deposited successfully." << endl;
cin >> account.data.withdrawAmount;
if (account.data.balance >= account.data.withdrawAmount) {
account.data.balance =account.data.balance- account.data.withdrawAmount;
cout << "Amount withdrawn successfully." << endl;
} else {
cout << "Insufficient balance. Withdrawal failed." << endl;
}
cout << "Account details:" << endl;
cout << "Account holder's name: " << account.data.accountHolderName << endl;
cout << "Account number: " << account.data.accountNumber << endl;
cout << "Balance: " << fixed << setprecision(2) << account.data.balance << endl;
return 0;
}