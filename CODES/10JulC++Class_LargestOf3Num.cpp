#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    //char b;
    double d;
    cin >> a >> b >> c;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "d = " << d << endl;
    if(a > b && a > c) {
        cout << a << endl;
    }
    else if(b > a && b > c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }
}