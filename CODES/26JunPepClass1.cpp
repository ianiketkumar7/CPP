#include<iostream>
using namespace std;
int main() {
    int a=0, i=0, num=0, len=0, arr[5];
    cout << "Enter your number: ";
    cin >> num;
    cout<<num<<endl;
    while(num > 0) {
        a = num % 2;
        arr[i] = a;
        i++;
        num = num / 2;
    }
    len=i;
    cout << len<<endl;
    for(i=(len-1);i>=0;i--)
    {
       cout<< arr[i] << endl;  
    }
}

// 1 0 1 0