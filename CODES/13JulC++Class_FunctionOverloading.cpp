#include<iostream>
using namespace std;
int fun1(int, int, int);
int fun1(int, int);

int main() {
    int a, b, c;
    cout << "Enter your numbers: ";
    cin >> a >> b >> c;
    cout << "Three numbers are: " << a << " ," << b << " ," << c << endl;
    cout << fun1(a, b, c) << endl;
    cout << fun1(a, b) << endl;
}

int fun1(int x, int y, int z) {
    cout << "Starting multiplication" << endl;
    int mul = x * y * z;
    return mul;
}

int fun1(int x, int y) {
    cout << "Strating addition" << endl;
    int add = x + y;
    return add;
}