#include<iostream>
using namespace std;
class Y;
class Z;
class X {
    private:
    int a;
    public:
    void a1() {
        a = 10;
    }
    friend int avg(X, Y, Z);
}x1;

class Y {
    private:
    int b;
    public:
    void b1() {
        b = 20;
    }
    friend int avg(X, Y, Z);
}y1;

class Z {
    private:
    int c;
    public:
    void c1() {
        c = 30;
    }
    friend int avg(X, Y, Z);
}z1;

int avg(X objX, Y objY, Z objZ) {
    int g = (objX.a + objY.b + objZ.c) / 3;
    return(g);
}

int main() {
    x1.a1();
    y1.b1();
    z1.c1();
    cout << "Average: " << avg(x1, y1, z1) << endl;
}