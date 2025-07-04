#include<iostream>
using namespace std;
int main() {
    int n, k, l;
    cout << "Enter num: ";
    cin >> n;
    for(int i = 1; i < n; i++) {
        int ctr=0;
        if(i==2) {
            k=i+1;
            l= i;
        }
        else {
            k=i;l=i+1;
        }
        for(int j = 1; j <= n+2; j++) {
            if(ctr < 3) {
                cout << k << " ";
                ctr++;
            }
            else {
                cout << l << " ";
            }     
        }
        cout << endl;
    } 
}

/*
        1 1 1 2 2 2 2
        3 3 3 2 2 2 2
        3 3 3 4 4 4 4
        4 4 4 5 5 5 5
*/