#include<iostream>
using namespace std;
int main() {
    int num1, base, a, count = 0;
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Enter the base value: ";
    cin >> base;
   while(num1 > 0) {
    if(num1 % base == 0) {
        count++;
        num1 = num1 / base;
        cout << "Number required to get the square value: " << count;
    }
    else {
        cout << "Void";
    }
   }
   cout << endl;

}