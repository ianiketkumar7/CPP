#include<iostream>
using namespace std;
int main() {
    int n, a = 0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        a = a + i;
    }
    cout << a << endl;
}