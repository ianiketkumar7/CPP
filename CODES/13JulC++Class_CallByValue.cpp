#include<iostream>
using namespace std;
void swap (int, int);
int main () {
    int a=10,b=50;
    cout<<"Before swapping "<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping "<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
void swap (int x, int y) {
    int t;
    t=x;   
    x=y;
    y=t;
    cout<<"After Swapping in function"<<endl;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
}