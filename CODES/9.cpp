#include<iostream>
using namespace std;
void Swap(int X,int Y)
{
    int Temp;
    Temp=X;
    X=Y;
    Y=Temp;
}
int main()
{
    int a=100,b=200;
    Swap(a,b); 
    cout<<"After Swap A= "<<a<<"and B="<<b;

}