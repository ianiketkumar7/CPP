#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    double balance = 1000.0;
    try
    {
        double amount;

        // Deposit Code 

        cout << "Enter your Deposit amount: ";
        cin >> amount;
        if(amount <= 0){
            throw invalid_argument("Invalid Deposit amount.");
        }
        balance = balance + amount;
        cout << "Availaible Balance: " << balance << endl;

        // Withdrawl Code

        cout << "Enter your Withdrawl ammount: ";
        cin >> amount;
        if(amount <= 0){
            throw invalid_argument("Invalid Withdrawl amount.");
        }
        if(amount > balance){
            throw runtime_error("Insufficent balance.");
        }
        balance = balance - amount;
        cout << "Availaible balance: " << balance << endl;
    }
    catch(exception& e)
    {
        cout << e.what();
    }
}