#include<iostream>
using namespace std;
class Complex
{
int real;
float imag;
public:
void getdata()
{
cout<<"enter real part = ";
cin>>real;
cout<<"enter imag part = ";
cin>>imag;
}
void display()
{cout<<"Sum="<<real<<"+"<<"i*"<<imag<<endl;
}
friend Complex operator+(Complex ,Complex);
};

Complex operator+(Complex c1,Complex c2)
{
Complex temp;
temp.real=c1.real+c2.real;
temp.imag=c1.imag+c2.imag;
return temp;
}
int main()
{
Complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3=c1+c2;
c3.display();
return 0;
}

