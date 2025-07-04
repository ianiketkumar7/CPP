#include<iostream>
using namespace std;
int main() {
    int n, rem;
    cout << "Enter num: ";
    cin >> n;
    while(n > 0) {
        rem = n % 2;
        n = n / 2;
        cout << rem;
    }
    cout << endl;
}

// wrong -> must be corrected