#include<iostream>
using namespace std;
int main(){
    // int a[5] = {10, 20, 30, 40, 50};
    // for(int i = 0; i < 5; i++){
    //     cout << a[i] << endl;
    // } 
    int a[5];
    cout << "Enter your elements: ";
    for(int i = 0; i < 5; ++i){  
        cin >> a[i];               // indexing to the valuess
    }
    // for(int i = 0; i < 5; ++i){   
    //     cout << a[i] << endl;    // Straight order
    // }
    for(int i = 4; i >= 0; --i){
            cout << a[i] << endl;   // Reverse order
        }
}