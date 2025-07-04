#include<iostream>
using namespace std;
class Employee {
    public:
    Employee() {
        cout << "Default Constructor Invoked" << endl;
    }
    ~Employee() {
        cout << "Destructor Evoked" << endl;
    }
};
int main(void) {
    cout << "In main func \n";
    cout << "1st obj \n";
    Employee e1;  //creating an object of Employee
    cout << "2nd obj \n";
    Employee e2;
    cout << "Ending main func \n";
    return 0;
}