#include<iostream>
using namespace std;
int main() {
    int n, location = -1, a[8], key = 5;
    cout << "Enter num of elements: " ;
    cin >> n;
    cout << "Enter the key to be searched: ";
    cin >> key;
    cout << "Enter the elements of array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            location = i;
            break;
        }
    }
    if(location == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Location of key found: " << location + 1 << endl;
    }
}