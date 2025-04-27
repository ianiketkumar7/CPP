#include<iostream>
using namespace std;
class calc{
    private:
    int num1,num2;
    public:
    void input(); 
    void sum() ;
    void mul() ; 
    void div() ;
    void sub() ;  
    void mod() ; 
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
void calc::input() {cin>>num1>>num2;}
void calc::sum()   {cout<<"\n sum = "<<num1+num2;}
void calc::mul()   {cout<<"\n mul = "<<num1*num2;}
void calc::div()   {cout<<"\n div = "<<num1/num2;}
void calc::sub()   {cout<<"\n sub = "<<num1-num2;}
void calc::mod()   {cout<<"\n mod = "<<num1%num2;}