#include <iostream>
using namespace std;
class ClassB;       // forward declaration
class ClassA {
    private:
    int a;
    public:
    void ipa() {
        a=10;
    }
    friend int add(ClassA, ClassB);
}A;

class ClassB {
    private:
    int b;
    friend int add(ClassA, ClassB);
    public:
    void ipb() {
        b=20;
    }
}B;

int add(ClassA objectA, ClassB objectB) {
    int s;
    s=objectA.a + objectB.b;
    return (s);
}

int main() {
    A.ipa(); B.ipb();
    cout << "Sum: " << add(A,B);
}