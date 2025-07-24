#include<iostream>
#include<cmath>

using namespace std;
class Triangle {
    public:
    int height, base;
    Triangle(int x, int y) : height(x), base(y) {
        height = x;
        base = y;
    }
    int triangle_area() {
        int area = 0.5 * height * base;
        return area;
    }
};
class Hypotenuse : public Triangle { 
    public:
    int height, base;
    Hypotenuse(int x, int y) : Triangle(x, y) {
        height = x;
        base = y;
    }
    int lenOfHypo() {
        int a = height * height;
        int b = base * base;
        int c = sqrt(a + b);
        return c;
    }
    int perimeterOfTri() {
        int per = height + base + lenOfHypo();
        return per;
    }
};
int main() {
    int a, b;
    cout << "Enter height & base of triangle: ";
    cin >> a >> b;
    Hypotenuse obj(a, b);
    cout << "Hypotenuse: " << obj.lenOfHypo() << endl;
    cout << "Area of Triangle: " << obj.triangle_area() << endl;
    cout << "Perimeter of Triangle: " << obj.perimeterOfTri() << endl;
}