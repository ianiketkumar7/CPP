#include<iostream>
using namespace std;
int main() {
    int n, pos = 3, a[8], x = 50;
    cout << "Enter no.of elements for array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = x;
    for(int i = 0; i <= n; i++) {
        cout  << a[i] << " ";
    }
    cout << endl;
}