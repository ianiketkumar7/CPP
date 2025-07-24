// Increment using member function

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
};
int main() {
    Number a1(9);
    cout << "Value before increment" << endl;
    a1.show_data();
    a1.operator++();
    cout << "Value after increment" << endl;
    a1.show_data();

}