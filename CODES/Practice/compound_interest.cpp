#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;
int main(){
    double rate;
    double principal, time;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter the amount of Time: ";
    cin >> time;

    double amount = principal * ((pow((1 + rate / 100), time)));
    double Compound_Interest = amount - principal;

    cout << "Compound Interest is: " << Compound_Interest << endl;
}