#include<iostream>
using namespace std;
int main() {
    int a;
    char c;
    void *p1, *p2;
    p1 = &(*int)a;
    p2 = &(*char)c;
    cout << "Enter the integer: ";
    cin >> *p1;
    cout << "Enter the char: ";
    cin >> *p2;
    if(*p1 > 0) {
        cout << "Positive" << endl;
    }
    else if( *p1 < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }
    if(*p2 >= 'a' || *p2 <= 'z') {
        cout << "Charecter" << endl;
    }
    else if(*p2 >= 0 || *p2 <= 9) {
        cout << "Number" << endl;
    }
    else {
        cout << "Zero";
    }
}