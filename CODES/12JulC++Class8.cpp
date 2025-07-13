#include<iostream>
using namespace std;
void fact() {
    int n, fact = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << fact << endl;
}
int main() {
    fact();
}