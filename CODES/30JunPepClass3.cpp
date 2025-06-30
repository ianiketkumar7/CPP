#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "Enter the num: ";
    cin >> n;
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n - i; j++) {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= 2 * i - 1; k++) {
    //         cout << count;
    //     }
    //     count++;
    //     cout << endl;
    // }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n - i; j++) {
            cout << " ";
        }
        for(int k = i; k >= 0; k--) {
            cout << k;
        }
        for(int l = 1;l <= i; l++)
        {
            cout << l;
        }
        cout << endl;
    }
}