#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Mulriplication Table of: " << num << endl;
    for(int i = 1; i <= 10; ++i){
        cout << num << " x " << i << " = " << num*i << endl;   // Multiplication table
    }
}