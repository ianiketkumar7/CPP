#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if(num > 0){
        cout << "Your number is a +ve number." << endl;
    } else{
        cout << "Your number is a -ve number." << endl;
    }
}