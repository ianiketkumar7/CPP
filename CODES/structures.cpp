#include<iostream>
using namespace std;
struct Emp{
    string name;
    int Empid;
    double salary;
};
int main(){
    struct Emp E;

    E.name = "Babbu Bhaiya";
    cout << "Employee Name: " << E.name << endl;
    E.Empid = 47;
    cout << "Employee ID: " << E.Empid << endl;
    E.salary = 89045.69840;
    cout << "Employee Salary: " << E.salary << endl;

    cout << "Total size in Bytes: " << sizeof(E) << endl;
}