#include<iostream>
using namespace std;
int main(){
    int n, r, sum = 0, temp;
    cout << "Enter your number: ";
    cin >> n;
    temp = n;


    while(n > 0){
        r = n % 10;
        sum = (sum * 10) + r;                 
        n = n / 10;
    }


if(temp == sum){
    cout << temp << " is a Palindrome" << endl;
}else{
    cout << temp << " is NOT a Palindrome" << endl;
}
}