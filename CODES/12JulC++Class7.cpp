#include<iostream>
using namespace std;
class second;
class first{ 
    int a ;
    void get() {
        cout<<"enter the value of a:";
        cin>>a;
    }
    public:
    void greatest(second) ;
};

class second {
    int b ;
    void get() {
        cout<<"enter the value of b:";
        cin>>b;
    }
    friend void first:: greatest(second);
};

void first::greatest (second ob2 ) {
    get();
    ob2.get();
    if(a > ob2.b)
    cout<<"greatest is "<< a << endl;
    else
    cout<<"greatest is: "<< ob2.b << endl;
}

int main() {
    first ob1;
    second ob2;
    ob1.greatest(ob2) ;
return 0;
}