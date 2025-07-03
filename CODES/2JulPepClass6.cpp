#include<iostream>
using namespace std;
class A {
    protected:
    int l, b;
    public:
    void get_l_b() {
        cout << "Enter Length: ";
        cin >> l;
        cout << "Enter Breadth: ";
        cin >> b;
    }
};
class B {
    protected:
    int s;
    public:
    void get_s() {
        cout << "Enter side: ";
        cin >> s;
    }
};
class C : public A, public B {
    public:
    void area_of_triangle() {
        get_l_b();
        cout << "Area of Triangle is: " << 0.5*l*b << endl;
    }
    void area_of_rectangle() {
        get_l_b();
        cout << "Area of Rectangle is: " << l*b << endl;
    }
    void area_of_square() {
        get_s();
        cout << "Area of Square is: " << s*s << endl;
    }
};
int main() {
    C c;
    c.area_of_triangle();
    c.area_of_rectangle();
    c.area_of_square();
    return 0;
}