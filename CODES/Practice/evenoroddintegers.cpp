#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    if(n % 2 == 0){
        cout << "Your number is Even." << endl;
    }
    else if(n == 0 || n == 1){
        cout << "Zero or One is neither Even nor Odd." << endl;
    } 
    else{
        cout << "Your your number is Odd." << endl;
    }
}