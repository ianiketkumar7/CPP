#include<iostream>
using namespace std;
void cbyaddress(int *p){                                          // *p = 135423( pointing the address of the variable num)
    *p = *p + 90;                                                // the value which is present in the address 135423 gets updated as plus 90 added to the addess's value 
    cout << "Changed val in function: " << *p << endl;           // updated value get print = 180
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;                                                  // num = 90 input
    cout << "Original Value: " << num << endl;                   // num = 90 printed
    cbyaddress(&num);                                             // address of num pointed to the *p as 135423(for example only)
    cout << "Changed value in main function: " << num << endl;   // now as the value in the num variables address is updated so 180 printed
}
                                                                 // This is call by address