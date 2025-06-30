#include<iostream>
using namespace std;
int main() {
    int arr[20][20], n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j >= i; j++) {
            int a = arr[i][j];
            cout << a;
        }
    }
}