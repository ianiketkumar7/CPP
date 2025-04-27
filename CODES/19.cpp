#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("country.txt");
    fout<<"Bharat\n";
    fout<<"Usa\n";
    fout<<"Uk\n";
    fout.close();

    fout.open("Capital.txt");
    fout<<"Delhi\n";
    fout<<"Washington\n";
    fout<<"Londan";
    fout.close();
    ifstream in1,in2;
    in1.open("Capital.txt");
    in2.open("country.txt");

    string s1,s2;
    while (!in1.eof())
    {
        in1>>s1;
        in2>>s2;
        cout<<s1<<" is the capital of "<<s2<<endl;
    }
    in1.close();
    in2.close();
}; 

