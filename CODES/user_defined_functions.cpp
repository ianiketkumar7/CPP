#include<iostream>
using namespace std;
void nike(string msg, int a, float b){                                                                     // function defined and its a user defined function
    cout << "Hello Learner :)) \n" << msg << endl <<"Your marks are: " << a << endl << "And Your overall percentage is: " << b << "%" <<  endl;
}
int main(){
    nike("Good to see yaa!", 89, 90);                                                                      // calling a function
}