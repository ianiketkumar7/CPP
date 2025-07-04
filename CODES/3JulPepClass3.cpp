#include<iostream>
using namespace std;
void func1() {
    int val[3] = {5, 10, 20};
    int* ptr;
    ptr = val;
    cout << "Element of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl;
    cout << ptr << " " << val << " " << &val << endl;
    cout << &ptr << endl;
}
int main() {
    func1();
}