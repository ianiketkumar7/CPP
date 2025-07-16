#include<iostream>
using namespace std;
int main() {
    int i, j, x = 0, n = 2, a[10][10];
    cout << "Enter elements: ";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                x = x + a[i][j];
            }
        }
    }
    cout << x << endl;
}