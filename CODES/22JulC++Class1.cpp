#include<iostream>
using namespace std;
class binary {
    int x;
    public:
    binary() {
        x = 0;
    }
    binary(int x1) {
        x = x1;
    }
    friend binary operator+(binary, binary);
    void show_data() {
        cout << x << " ";
    }
};
binary operator+(binary ob1, binary ob2) {
    binary temp;
    temp.x = ob1.x + ob2.x;
    return temp;
}
int main() {
    binary ob1(1), ob2(4), ob3;
    ob3 = operator+(ob1, ob2);
    ob3.show_data();
}