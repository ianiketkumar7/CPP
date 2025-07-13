#include<iostream>
using namespace std;

class student {
    public:
    int roll;
    string name;   // data members
    double marks;

    void getdata(string name1, int roll1, double marks1) {  // member function
        name = name1;
        roll = roll1;
        marks = marks1;

    }
    void display(){                  // member function
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    student s;
    string name;
    int roll;
    double marks;
    cout << "Enter your data: ";
    cin >> name >> roll >> marks;
    s.getdata(name, roll, marks);
    s.display();
}