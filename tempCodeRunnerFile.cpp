#include<iostream>
using namespace std;

class student {
    public:
    int roll;
    string name;   // data members
    double marks;

    void getdata() {                // member function
        cin >> roll >> name >> marks;
    }
    void display(){                  // member function
        cout << roll << endl;
        cout << name << endl;
        cout << marks;
    }
};
int main() {
    student s;
    s.name = "ssk";
    cout << s.name;
    s.getdata();
    s.display();
}