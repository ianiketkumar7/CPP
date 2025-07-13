#include<iostream>
using namespace std;
union u {
 int a;
char b;
float c;
 void get()
{
cout<<"Enter value of int a:"<<endl;
cin>>a;
cout<<"Enter value of char b:"<<endl;
cin>>b;
cout<<"Enter value of float c:"<<endl;
cin>>c;
}
 void show()
{
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;
cout<<"c:"<<c<<endl;
	 	
}
};
int main()
{
	u array[50];
	int n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter information:"<<i+1<<endl;
		array[i].get();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"information is:"<<i+1<<endl;
		array[i].show();
	}}