#include<iostream>
#include<cfloat>
using namespace std;
int main() {
    int a = 45;
    int *b = &a;
    cout << "Address of a: " << b << endl;
    cout << "Value of a: " << *b << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Val of a: " << a << endl;

    cout << "Int pointer size: " << sizeof(int) << endl;
    cout << "Int pointer size: " << sizeof(float) << endl;
    cout << "Int pointer size: " << sizeof(string) << endl;
    cout << "Int pointer size: " << sizeof(double) << endl;
    cout << "Int pointer size: " << sizeof(char) << endl;

    cout << "Float max " << FLT_MAX << " and min " << FLT_MIN << endl;
}