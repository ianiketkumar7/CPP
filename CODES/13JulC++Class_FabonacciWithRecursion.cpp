#include <iostream>
using namespace std;

int fabonacci(int x) {
    if(x == 0 || x == 1) {
        return x;
    }
    else {
        return fabonacci(x - 1) + fabonacci(x - 2);
    }
}
int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    for(int i = 0; i<= n; i++) {
    cout << "Fabonacci series: " << fabonacci(i) << endl;
    }
}