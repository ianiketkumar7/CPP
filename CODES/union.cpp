#include<iostream>
using namespace std;
union Emp{
    int Empid;             // 4 bytes
    double salary;         // 8 bytes     because in union the biggest members size is only assigned to the union
    char ch;               // 1 bytes
};
int main(){
    union Emp E;
    E.Empid = 56;
    cout << "Employee ID: " << E.Empid << endl;
    E.salary = 60000;
    cout << "Salary of the Employee: " << E.salary << endl;
    E.ch = 'Z';
    cout << "Character assigined to the Employee: " << E.ch << endl;
    cout << "Size of the union: " << sizeof(E) << endl;
}