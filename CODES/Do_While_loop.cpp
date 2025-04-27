#include<iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter the name: ";
    cin >> name;
    do{
        cout << name << endl;
        break;
    } 
    while (name != "cdt");
}