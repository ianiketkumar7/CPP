// Friend class

#include <iostream>
using namespace std;
class demo{
int x,y;
public:
void ip() { cin>>x>>y;}
void op() { cout<<"\n X = "<<x<<" and Y = "<<y; }
friend void sum(demo t);
friend void mul(demo t);

};

void sum(demo t)
{cout<<"\n Sum = "<<t.x+t.y; }
void mul(demo t)
{cout<<"\n Sum = "<<t.x*t.y; };

main()
{
demo d;
d.ip();
d.op();
sum(d);
mul(d);
};