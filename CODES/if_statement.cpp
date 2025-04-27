#include<iostream>
using namespace std;
int main(){
    string signal;
    cout << "Enter the displayed signal: ";
    cin >> signal;
    if(signal == "red"){
        cout << "STOP! or get PUNISHED" << endl;
    } if(signal == "green"){
        cout << "You may go now, The signal is green." << endl;
    }
}