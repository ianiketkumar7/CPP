#include<iostream>
using namespace std;
class demo{
private:
int x,y;
public:
void ip(){
cin>>x>>y;
}
void op(){
cout<<"\n x= "<<x<<"and y= "<<y;
}
friend void sum(demo t);
}d;
void sum(demo t){
cout<<"\n the sum ="<<t.x+t.y;
}
int main(){
d.ip();
d.op();
sum(d);
return 0;
}