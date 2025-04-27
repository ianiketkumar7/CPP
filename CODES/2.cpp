#include<iostream>
using namespace std;
class calc{
    private:
    int num1,num2;
    public:
    void input() {cin>>num1>>num2;}
    void sum()   {cout<<"\n sum = "<<num1+num2;}
    void mul()   {cout<<"\n mul = "<<num1*num2;}
    void div()   {cout<<"\n div = "<<num1/num2;}
    void sub()   {cout<<"\n sub = "<<num1-num2;}
    void mod()   {cout<<"\n mod = "<<num1%num2;}
};
int main()
{
    calc obj1;
    obj1.input();
    obj1.sum();
    obj1.mul();
    obj1.div();
    obj1.sub();
    obj1.mod();
    return 0;
}
