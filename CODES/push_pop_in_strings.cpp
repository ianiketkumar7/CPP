#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string myAddress = "Raurkela";
    cout << "Original Address: " << myAddress << endl;

    myAddress.push_back('U');
    cout << "Updated Address: " << myAddress << endl;
    
    myAddress.pop_back();
    cout << "Pop Address: " << myAddress << endl;
}