#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){
        if(age >= 18 && age <=59){
            cout << "You are Eligible to work in our Organisation." << endl;
        }else{
            cout << "You are Not eligible to work in our Organisation."<< endl;
        }
    } else{
        cout << "You are a Minor. You cannot work in our Organisation." << endl;
    }
}