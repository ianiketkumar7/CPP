#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Charecter\tASCII Value\n";
    for(c = 'A'; c <= 'Z'; c++){
        cout << c << "\t\t" << int(c) << endl;
    }
    return 0;
}