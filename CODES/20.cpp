#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream fp,fp1;
fp.open("country.txt", ios::in|ios::out);
fp<<"Bharat\n";
fp<<"USA\n";
fp<<"UK";

fp1.open("capital.txt", ios::in|ios::out);
fp1<<"Delhi\n";
fp1<<"Washington\n";
fp1<<"Londan";

fp.seekg(0,ios::beg);
fp1.seekg(0,ios::beg);

string s1,s2;
while ( fp.eof())
{
fp>>s1;
fp1>>s2;
cout<<s1<<" is a capital of "<<s2<<endl;

}

fp.close();
fp1.close();

}