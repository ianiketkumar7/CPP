#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[] = "Gaming for me";
    char str2[] = "Gaming for m";
    // // //int l = strlen(str);           // length of a string
    // // cout << l << endl;
    
    // cout << strrev(str);   // reverse of a string
    
    // strcpy(str2,str);       // coping str to str2 and printing it
    // cout << str2;

    // strcat(str,str2);
    // cout << str << endl;     // concation of values of str and str2 and printing the str for checking the whole value is printe dor not

    int value = strcmp(str,str2);
    if(value == 0){
        cout << "Strings are equal." << endl;
    } else{
        cout << "Strings are not equal." << endl;
    }
}