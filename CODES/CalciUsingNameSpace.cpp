#include<iostream>
using namespace std;
namespace calculator {
    int add(int a, int b) {
        return a + b;
    }
    int sub(int a, int b) {
        return a - b;
    }
    int mul(int a, int b) {
        return a * b;
    }
    int div(int a, int b) {
        return a / b;
    }
}

int main() {
    int a, b;
    cout << "Enter the values of a & b: " << endl;
    cin >> a >> b;
    int Ops, x;
    cout << "Enter the type of operation you want to choose: ";
    cin >> Ops;
    cout << "Enter the Arithmetic OPS\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\nn-> ";
    cin >> x;
    switch(Ops) {
        case 1:
        switch(x) {
            case 1: 
            cout << "Addition of a & b :" << calculator::add(a, b) << endl;
            break;

            case 2:
            cout << "Subtraction of a & b :" << calculator::sub(a, b) << endl;
            break;

            case 3:
            cout << "Multiplication of a & b :" << calculator::mul(a, b) << endl;
            break;

            case 4:
            if(b == 0) {
                cout << "The number provided is not accurate to perform the operation." << endl;
            }
            else {
                cout << "Division of a & b :" << calculator::div(a, b) << endl;
            }
            break;
        }
        break;
    }
}