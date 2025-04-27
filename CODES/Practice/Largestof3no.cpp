#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 21, c = 4;
    if(a > b && a > c){
        cout << "Largest no is a = " << a << endl;
    }else if(c > a && c > b){
        cout << "Largest no is c = " << c << endl;
    } 
    else{
        cout << "Largest no is b = " << b << endl;
    }

}