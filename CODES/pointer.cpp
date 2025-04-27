#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;       // pointer
    int **q = &p;      // pointer to pointer

    cout << "value of a: " << a << endl;
    cout << "address of a: " << p << endl;
    cout << "value of a: " << *p << endl;
    cout << "address of a: " << &a << endl;
    cout << "address of p: " << &p << endl;

    cout << "address of p: " << q << endl;   // address of p
    cout << "address of a: " << *q << endl;  // address of a
    cout << "value of a: " << **q << endl; // value of a
    cout << "address of q: " << &q << endl;  // address of q
}