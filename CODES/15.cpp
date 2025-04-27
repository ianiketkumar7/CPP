#include<iostream>
using namespace std;
class data{
    int x,y;
    friend class demo;
};
class demo{
    public:
    void ip(data &t) {cin>>t.x>>t.y;}
    void op(data t) {cout<<"\n X = "<<t.x<<" and Y = "<<t.y;}
    void sum(data t) {cout<<"\n Sum = "<<t.x+t.y;}
    void mul(data t) {cout<<"\n Mul = "<<t.x*t.y;}
};
main()
{
    demo d;
    data k;
    d.ip(k);
    d.op(k);
    d.sum(k);
    d.mul(k);
    
}
