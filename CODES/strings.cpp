#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char myName[20];                            //the size is pre-defined and fixed before only
                                                //mutable in nature
                                                //ending index of this string  is null(\0)
    cout << "Enter your name: ";               // a method to take string value as input by using character array
    gets(myName);
    cout << "Your name is: " << myName << endl;

    string myAddress;                       //it's size is dynamic in nature, it increases or decrease on the basis of the input provided to it
                                            //immutable in nature, changes will get stored in new objects
                                            //no concept of null charecter
    cout << "Enter your Address: ";
    getline(cin,myAddress);
    cout << "Your address is: " << myAddress << endl;
}