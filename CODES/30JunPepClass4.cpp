#include<iostream>
using namespace std;
int main() {
    int n,a = 1;
    cout << "Enter num: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || j == n-i+1)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
            
        }
        
        cout << endl;
    }
}