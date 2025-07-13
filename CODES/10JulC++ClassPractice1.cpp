#include<iostream>
using namespace std;

class student {
    public:
    //char a[100];
    int roll;       // data members
    string name;    // data members
    double marks;   // data members

    void getdata();         // function decleration
    void display();        // function decleration

};
    void student::getdata() {                // member function
        cout << "Enter the values: ";
        getline(cin, name);
       // cin.ignore();
       // cin.getline(a, 100);
        cin >> roll >> marks;
    }
    void student::display(){                  // member function
        cout << "Roll no: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks;
    }
int main() {
    student s;
    s.name = "op";
    cout << s.name;
    s.getdata();
    s.display();
}