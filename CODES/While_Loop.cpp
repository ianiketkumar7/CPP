#include<iostream>
using namespace std;
int main(){
    int pwd = 2256;
    int mypwd;
    cout << "Enter the pin: ";
    cin >> mypwd;
    
    while(pwd>0){
        if (pwd!=mypwd)
        {
            cout << "Pin not matched" << endl;
            cout << "Enter the pin again: ";
            cin >> mypwd;
        } else{
            cout << "Phone unlocked!" << endl; 
            break;
        }
        
    }
}