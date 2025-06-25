#include<iostream>
using namespace std;

namespace Mynamespace {
    void Gigachad() {
        cout << "Hi there, I am Giga Chad form namespace that you have created." << endl;
    }
    int sum(int a,int b) {
        return a + b;
    }
}
int main() {
    Mynamespace::Gigachad();
    cout << "Printing sum of 2 numbers from namespace: " << Mynamespace::sum(45, 8) << endl;
}