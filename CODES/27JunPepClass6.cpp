#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    char ch = 'A';
    for(int i = 1; i < n; i ++) {
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}