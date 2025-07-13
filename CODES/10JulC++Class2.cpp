#include<iostream>
using namespace std;

class student {
    public:
    int roll;
    string name;   // data members
    double marks;

    void getdata() {                // member function
        cout << "Enter the values: ";
        cin >> roll >> name >> marks;
    }
    void display(){                  // member function
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks;
    }
};
int main() {
    student s;
    s.getdata();
    s.display();
}