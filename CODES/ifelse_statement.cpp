#include<iostream>
using namespace std;
int main(){
    string weather;
    cout << "Enter the weather outside the house: ";
    cin >> weather;
    if(weather == "rainy"){
        cout << "Must take an umbrella to go outside." << endl;
    } else{
        cout << "Umbrella is not required as its not raining outside." << endl;
    }
}