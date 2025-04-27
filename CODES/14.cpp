// A function is a friend of two classes
#include<iostream>
using namespace std;
class B ;

class A{
int a;
public:
void ip() { cin>>a;}
void op() { cout<<"\n x = "<<a;}
friend void sum( A,B);

};

class B{
int b;
public:
void ip() { cin>>b;}
void op() { cout<<"\n x = "<<b;}
friend void sum( A,B);

};

void sum ( A k ,B j)
{ cout<<"\n sum = "<<k.a+j.b; }
main()
{
A obj1;
B obj2;
obj1.ip();
obj2.ip();
sum (obj1,obj2);

}