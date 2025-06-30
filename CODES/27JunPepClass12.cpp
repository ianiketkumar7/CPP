#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the num: ";
    cin >> n;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            cout << "*" << " ";
        }
        for(int k = 2; k < n - 2; k++) {
            cout << " ";
        }
        cout << endl;
    }
}