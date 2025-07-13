#include<iostream>
using namespace std;
void fabonacci() {
    int n;
    cout << "Enter the length: ";
    cin >> n;
    int first = 0, second = 1, next;
    cout << first << " ";
    cout << second << " ";

    for(int i = 0; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}
int main() {
    fabonacci();
}