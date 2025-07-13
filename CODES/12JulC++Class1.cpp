#include<iostream>
using namespace std;
class Employee {
    int id;
    string name;
    public:
    void input() {
        cout << "Enter details: " ;
        cin >> id >> name;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Employee e[n];
    for (int i = 0; i <= n; i++) {
        e[i].input();
        e[i].display();
    }
}