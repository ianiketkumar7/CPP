#include<iostream>
using namespace std;
void armstrong() {
    int num, sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    int temp = num;

    while(temp > 0) {
        int rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(num == sum) {
        cout << "Your number is a armstrong number." << endl;
    }
    else {
        cout << "It's not a armstrong number." << endl;
    }
}
int main() {
    armstrong();
}