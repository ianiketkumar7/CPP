#include<iostream>
#include<stdexcept>
int main(){
    int a = 10, b = 0;
    try{
        int c = a / b;
        cout << "Result: " << c << endl;
    }
    catch(exception e){
        cout << e.what();
    }
}