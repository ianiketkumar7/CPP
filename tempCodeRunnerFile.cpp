#include<iostream>
using namespace std;
class kilo {
    int kg, gm;
    public:
    kilo(int k) {
        kg = k/10;
        gm = k%10;
    }
    void display() {
        cout << kg << "Kg" << " " << gm << "Gram" << endl;
    }
};
int main() {
    kilo g(25);
    g.display();
}