#include<iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter your prefered year: ";
    cin >> year;
    if(year % 400 == 0){
        cout << "It's a Leep Year! :):)";
    }else if(year % 100 == 0){
        cout << "It's not a Leep Year! :(:(";
    }else if(year % 4 == 0){
        cout << "It's a Leep Year! :):)";
    }else{
        cout << "It's not a Leep Year! :(:(";
    }
}