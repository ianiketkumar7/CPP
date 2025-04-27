#include <iostream> 
using namespace std;
class Point {
int x;
int y;
public: 
Point(int a = 0, int b = 0) {
x = a;
y = b;
}
void displayCoordinates() { 
    cout<<"Coordinates: ("<< x << ", " << y << ")" << endl;
}
};
int main() {
Point p1;
p1.displayCoordinates();
Point p2(3, 5);
p2.displayCoordinates();
return 0;
}