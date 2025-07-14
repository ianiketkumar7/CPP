#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> k;
    k.push(10);
    k.push(35);
    k.push(69);
    k.push(33);
    
    if(k.empty() == 1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }
}