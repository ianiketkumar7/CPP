#include <iostream>
#include <string>
using namespace std;
union Customers {
    char name[40];
    int acc_no;
    double balance;
};
void increment_balance(Customers a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i].balance > 1000) {
            a[i].balance += 100;
            cout << a[i].balance << " ";
        }
    }
}
int main() {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;
    Customers g[n];
    for(int i = 0; i < n; i++) {
        cin >> g[i].name >> g[i].acc_no >> g[i].balance; 
    }
    increment_balance(g, n);
}