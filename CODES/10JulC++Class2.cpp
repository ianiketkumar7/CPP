#include<iostream>
using namespace std;

class student {
    public:
    int roll;       // data members
    string name;   // data members
    double marks;   // data members

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