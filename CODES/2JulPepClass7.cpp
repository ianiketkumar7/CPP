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
    void area_of_triangle() {
        cout << "Area of Triangle." << endl;
        get_l_b();
        cout << "Area of Triangle is: " << 0.5*l*b << endl;
    }
    void area_of_rectangle() {
        cout << "Area of Rectangle. " << endl;
        get_l_b();
        cout << "Area of Rectangle is: " << l*b << endl;
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
     void area_of_square() {
        cout << "Area of Square." << endl;
        get_s();
        cout << "Area of Square is: " << s*s << endl;
    }
};
int main() {
    A a1;
    B b1;
    a1.area_of_triangle();
    a1.area_of_rectangle();
    b1.area_of_square();
    return 0;
}