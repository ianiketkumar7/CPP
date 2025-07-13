#include<iostream>
using namespace std;
int main() {
    int n, a[10], sum = 0;
    cout << "Enter the no.of ele for array: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) 
        sum = sum + a[i];
    }
    cout << sum << endl;
}