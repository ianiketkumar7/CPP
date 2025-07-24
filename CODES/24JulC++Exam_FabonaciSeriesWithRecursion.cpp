#include<iostream>
using namespace std;
int fab(int x) {
    if(x == 0 || x == 1) {
        return x;
    }
    return fab(x-1) + fab(x-2);
}
int main() {
    int n;
    cout << "Enter your num: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << fab(i) << " ";
    }
}