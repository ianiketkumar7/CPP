#include<iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cnt = 1;
            break;
        }
    }
    if(cnt == 1) {
        cout << n << " is not a prime number." << endl;
    }
    else {
        cout << n << " is a prime number." << endl;
    }
}