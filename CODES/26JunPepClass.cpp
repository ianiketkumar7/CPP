#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    int rev_num = 0;
    while(num > 0) {
        int a = num % 10;
        rev_num = rev_num * 10 + a;
        num = num / 10;
    }
    cout << "Reversed number: " << rev_num << endl; 
}