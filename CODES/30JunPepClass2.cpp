#include<iostream>
using namespace std;

int main() {
    int n, a, rev;
    cout << "Enter your number: ";
    cin >> n;

    if((n % n == 0) && (n % 1 == 0)) {
        while(n > 0) {
            a = n % 10;
            rev = rev * 10 + a;
            n = n / 10;
        }
        cout << rev;
    }
}