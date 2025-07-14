#include<iostream>
using namespace std;
int main() {
    int n, a[10], l, h, m, key, location = -1;
    cout << "Enter num of elements: " ;
    cin >> n;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i< n; i++) {
        cin >> a[i];
    }
    l = 0;
    h = n - 1;
    while(l <= h) {
        m = (l + h) / 2;
        if(a[m] == key) {
            location = m;
            break;
        }
        else if(key > a[m]) {
            l = m + 1;
        }
        else {
            h = m - 1;
        }
    }
    if(location == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "key value found at: " << location + 1 << endl;
    }
}