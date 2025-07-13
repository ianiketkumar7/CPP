#include<iostream>
using namespace std;
enum Direction {North = 1, South, East, West};
int main() {
    Direction x;
    
    switch(x) {
        case 1:
        cout << "North" << endl;
        break;

        case 2:
        cout << "South" << endl;
        break;

        case 3:
        cout << "East" << endl;
        break;

        case 4:
        cout << "West" << endl;
        break;
    }
}