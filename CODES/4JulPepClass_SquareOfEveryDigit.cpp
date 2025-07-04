#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int a;
    for(int i = 1; i <= sizeof(n); i++) {
        for(int j = i; j <= i; j++) {
            a = j*j;
            cout << a;
        }
        cout << " ";
    }
    cout << endl;
}