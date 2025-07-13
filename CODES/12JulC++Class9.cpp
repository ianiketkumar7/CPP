#include<iostream>
using namespace std;
struct Employee {
    int age;
    char name[50];
    float salary;
};
int main() {
    Employee e1;
    cout << "Enter your name: ";
    cin.getline(e1.name, 50);
    cout << "Enter your age: ";
    cin >> e1.age;
    cout << "Enter salary: ";
    cin >> e1.salary;

    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Salary: " << e1.salary << endl;
}