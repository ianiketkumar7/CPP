#include<iostream>
using namespace std;
class Kilo {
    int kg, gm;
    public:
    Kilo(int k) {
        kg = k/1000;
        gm = k%1000;
    }
    void display() {
        cout << kg << "Kg" << " " << gm << "Gram" << endl;
    }
};
int main() {
    Kilo g(7800);
    g.display();
}