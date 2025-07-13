#include<iostream>
using namespace std;
int main() {
    int n, pos = 4, a[10];
    cout << "Enter no.of elements for array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = pos; i <= n; i++) {
        a[i - 1] = a[i];
    }
    for(int i = 0; i < n - 1; i++) {
        cout  << a[i] << " ";
    }
    cout << endl;
}