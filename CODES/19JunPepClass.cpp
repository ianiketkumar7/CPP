#include<iostream>
#include<climits>
using namespace std;
// void ref(int *x) {
// (*x)++;
// }

void increment(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    // // int x = 10;
    // // int *ptr = &x;
    // // cout << x << endl;
    // // cout << "Address of x: " << &x << endl;
    // // cout << "Value stored in pointer: " << ptr << endl;
    // // cout << "value pointed by pointer: " << *ptr << endl;
    // // (*ptr)++;
    // // cout << "Updated value of x: " << x << endl;
    // // // cout << increment(ptr);
    // // // cout << increment(x);


    // int x = 20;
    // int *ptr = &x;
    // cout << "Val of x: " << x << endl;
    // cout << "Val stored in pointer: " << ptr << endl;
    // cout << "Derefrence of pointer: " << *ptr << endl;
    // (*ptr)++;                                               //pointer arthematic
    // cout << "Updated val of ptr: " << x << endl;
    // (*ptr)--;
    // cout << "Updated val of ptr: " << x << endl;

    // int **dptr = &ptr;                                  // Double pointer
    // cout << "val stored in dptr: " << dptr << endl;
    // cout << "single derefrence of dptr: " << *dptr << endl;
    // cout << "double derefrence of dptr: " << **dptr << endl;

    // int ***tptr = &dptr;                                // Triple pointer
    // cout << "val stored in tptr: " << tptr << endl;
    // cout << "single derefrence of tptr: " << *tptr << endl;
    // cout << "double derefrence of tptr: " << **tptr << endl;
    // cout << "triple derefrence of tptr: " << ***tptr << endl;

    // // call by refrence using pointer
    // cout << ref(ptr) << endl;

    // // char ch = 'a';
    // // char* ptr1 = &ch;
    // // ch++;
    // // cout << *ptr1 << endl;

    // Arrays

//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " " << endl;
//     }

//    cout << increment(arr, n);
//     cout << sizeof(arr)<<endl;


}
