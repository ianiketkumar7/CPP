#include<iostream>
using namespace std;
int main() {
    char x;
    cout << "Enter a charecter: ";
    cin >> x;
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        cout << "The entered charecter is a vowvel." << endl;
    }
    else {
        cout << "The charecter entered by you is not a vowvel." << endl;
    }
}