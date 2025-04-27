#include<iostream>
using namespace std;
void changval(int num){                                 // defined the function
    num = num + 10;
    cout << "Changed Value after performing Call By Value: " << num << endl;
}
int main(){
    int num = 100;
    cout << "Original Value: " << num << endl;

    changval(num);                                      // calling the function
    
    cout << "Original Value: " << num << endl;
}