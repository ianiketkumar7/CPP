#include<iostream>
using namespace std;
class Number {
    private:
    int x;
    public:
    Number(int a) {
        x = a;
    }
    void operator++() {
        x = ++x;
    }
    void show_data() {
        cout << "x = " << x << endl;
    }
    void factorial() {
        int fact = 1;
        for(int i = 1; i <= x; i++) {
            fact = fact * i;
        }
        cout <<  fact << endl;
    }
};
int main() {
    int b;
    cout << "Enter your value: ";
    cin >> b;
    Number a1(b);
    cout << "Value before increment" << endl;
    a1.show_data();
    a1.operator++();
    cout << "Value after increment" << endl;
    a1.show_data();
    cout << "Factorial of incremented number: " << endl;
    a1.factorial();
}