#include<iostream>
using namespace std;
class info{
    int a,b;
    public:
    info()
    {
        cout<<"\n Constructor called";
        a=10;
        b=20;
    }
    void op()
    {
        cout<<"\n Values are:"<<a<<" "<<b;
    }
};
int main()
{
    info o;
    o.op();
    info k;
};