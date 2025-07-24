#include<iostream>
using namespace std;
class FullName {
    string x, y;
    public:
    FullName(string firstName, string lastName) {
        x = firstName;
        y = lastName;
    }
    operator string() {
        return x + " " + y + "\n";
    }

};
int main() {
    string a, b;
    cout << "Enter First name: ";
    cin >> a;
    cout << "Enter Last name: ";
    cin >> b;
    FullName fullname(a, b);
    string fullnamestring = fullname;
    cout << fullnamestring;
}