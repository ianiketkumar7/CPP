#include<iostream>
using namespace std;
#define PI 3.14
#define Square(rad) ((rad)*(rad))
int main(){
    int rad;
    cout << "Enter the radius: ";
    cin >> rad;
    double area = PI * Square(rad);
    cout << "Area of the Circle: " << area << endl;
}