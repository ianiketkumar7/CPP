#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> g;
    g.push(33);
    g.push(40);
    g.push(100);
    g.push(200);
    g.push(1000);
    g.push(10);
    g.push(1000000);

    cout << "Size of the stack: " << g.size() << endl;
}