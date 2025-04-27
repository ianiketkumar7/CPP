#include<iostream>
using namespace std;
int main(){
    char value;
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd nnumber: ";
    cin >> num2;
    cout << "What do you want to perform: ";
    cin >> value;
    switch(value){
        case '+': cout << "Addition: " << num1 + num2 << endl;
        break;
        case '-': cout << "Subtraction: " << num1 - num2 << endl;     // Basic Calculator
        break;
        case '*': cout << "Multiplication: " << num1 * num2 << endl;
        break;
        case '/': cout << "Division: " << num1 / num2 << endl;
        break;
        case '%': cout << "Modulos: " << num1 % num2 << endl;
        break;
        default: cout << "Invalid value entered." << endl;
    }
}