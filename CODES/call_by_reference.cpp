#include<iostream>
using namespace std;
int main(){
    int a = 150;
    cout << a << endl;

    int &ref = a;
    cout << ref << endl;
    
    ref = ref + 50;
    cout << ref << endl;
    cout << a << endl;
    
    cout << ++ref << endl;
    cout << a << endl;
}