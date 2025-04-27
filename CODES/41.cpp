#include<iostream>
using namespace std;

int b = 200; //global variable

int main(){
    int a; //local variable
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The output for a is : "<<a<<endl;

    cout << "The Output for b is: " <<b<< endl;
}