#include<iostream>
using namespace std;
int main() {
    // string name, branch, collage_name;
    // int age;
    // char grade;
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Enter your Branch of Study: ";
    // cin >> branch;
    // cout << "Enter your grade: ";
    // cin >> grade;
    // cout << "Enter your Collage name: ";
    // cin >> collage_name;

    // cout << endl;
    // cout << name << " is studiying in " << branch << " at " << collage_name << "." << endl; 
    // cout << "Age is " << age << " and grade is " << grade << endl;

    int n;
    int sum = 0;

    cout << "Enter your number: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        int a = i*i;
        sum = sum + a;
    }
    cout << "Sum of squares of n numbers: " <<sum << endl;
}