#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout << "Enter your number: ";
    cin >> n;
    
    if(n <= 1){
        cout << n << " is NOT a Prime number." << endl;       // if n < 1 it's not a prime
    }else{
        for(int i = 1; i <= n; i++){
            if(n % i == 0)
            count++;
        }
        if(count > 2){
            cout << n << " is NOT a Prime number." << endl;
        } else{
            cout << n << " is a Prime Number." << endl;
        }
    }
}