#include<iostream>
using namespace std;
class Complex {
    int x;
    float y;
    public:
    Complex() {
        x = 0;
        y = 0;
    }
    Complex(int a1, int a2) {
        x = a1;
        y = a2;
    }
    Complex(float b1, float b2) {
        x = b1;
        y = b2;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex x1, Complex y1) {
    Complex real, imagi, temp;
    real.x = x1.x + y1.y;
    imagi.y = x1.y + y1.y;
    temp.x = real.x + imagi.y;
}