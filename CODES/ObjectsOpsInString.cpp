#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    // string name = "Avinash";
    // cout << name.length() << endl;     // both length() and size() can be used to find length of string

    // string name = "Avinash";
    // name.replace(0,7,"Aniket");           // replacing the value avinash with aniket by specifing '0' as 1st index of avinash and '7' as length of the string and in last giving the string which is to be replaced.
    // cout << name << endl;

    // string name = "Avinash";
    // string naam = " Korrai";
    // name.append(naam);                    // appends the new value with the old one 
    // cout << name << endl;

    string name = "Avinash Korrai";
    reverse(name.begin(),name.end());        // reverse order printing of strings, reverse is present in algorithm library
    cout << name << endl;
}