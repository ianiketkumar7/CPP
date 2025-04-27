#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int a = 10, b = 0;
    try{
        int c = a / b;
        if(b == 0){
            cout << "Not Possible." << endl;
        }
        cout << "Result: " << c << endl;
    }
    catch(exception e){
        cout << "Exception Handled." << e.what();
    }
}