#include<iostream>
using namespace std;
int main(){
    char op;
    int a, b;
    cout << "Enter 2 numbers to perform calculations on them :";
    cin >> a >> b;
    cout << "\n a -> Addition \n s -> Substraction \n m -> Multiplication \n d -> Division \nEnter which calculation do you want to perform : ";
    cin >> op;

    if(op == 'a'){
        cout << "Addition of " << a << " and " << b << " is : " << a+b << endl;
    }
    else if(op == 's'){
        cout << "Substraction of " << a << " and " << b << " is : " << a-b << endl;
    }
    else if(op == 'm'){
        cout << "Multiplication of " << a << " and " << b << " is : " << a*b << endl;
    }
    else if(op == 'd'){
        cout << "Division of " << a << " and " << b << " is : " << a/b << endl;
    }
    else{
        return 0;
    }

}