#include<iostream>
using namespace std;
int n, rem, rev = 0;
int main() {
    void reverseNumber(int &n);
    cout << "Enter your number: ";
    cin >> n;
    reverseNumber(n);
}

void reverseNumber(int &n) {

    while(n > 0) {
       rem = n % 10;
       rev = rev * 10 + rem;
       n = n / 10;
    }
    cout << rev << " is the reversed number." << endl;
}