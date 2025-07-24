// Increment using friend function

#include<iostream>
using namespace std;
class Number {
    private:
    int x;
    public:
    Number(int a) {
        x = a;
    }
    void show_data() {
        cout << "x = " << x << endl;
    }
    friend void operator++(Number);
};
void operator++(Number a1) {
    int x = ++(a1.x);
    cout << "x = " << x << endl;
}
int main() {
    Number a2(9);
    cout << "Value before increment" << endl;
    a2.show_data();
    cout << "Value after increment" << endl;
    operator++(a2);
    

}