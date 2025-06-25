#include<iostream>
using namespace std;
// int l, b;
// int s;
// int inpt_l_b() {
//     cout << "Enter length: ";
//     cin >> l;
//     cout << "Enter breadth: ";
//     cin >> b;
//     return l;
//     return b;
// }
// int inpt_s() {
//     cout << "Enter side of square: ";
//     cin >> s;
//     return s;
// }

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

    // int n;
    // int sum = 0;
    // cout << "Enter your number: ";
    // cin >> n;
    // for(int i = 1; i <= n; i++) {
    //     int a = i*i;
    //     sum = sum + a;
    // }
    // cout << "Sum of squares of n numbers: " <<sum << endl;

    // int n;
    // int fact = 1;
    // cout << "Enter your number: ";
    // cin >> n;
    // for(int i = 1; i <= n; i++) {
    //     fact = fact * i;
    // }
    // cout << "Factorial of n numbers: " << fact << endl;


    // int input;
    // cout << "Choose from the bellow options\n1 - Triangle area\n2 - Rectangle area\n3 - Square area" << endl;
    // cout << "Give your input: ";
    // cin >> input;
    // switch(input) {
    //     case 1:
    //     inpt_l_b();
    //     cout << "Area of Triangle: " << 0.5 * (l * b) << endl;
    //     break;

    //     case 2:
    //     inpt_l_b();
    //     cout << "Area of rectangle: " << l*b << endl;
    //     break;

    //     case 3:
    //     inpt_s();
    //     cout << "Area of square: " << s*s << endl;
    //     break;

    //     default:
    //     cout << "invalid Option selected";
    // }

    // int n;
    // cout << "Enter your digit: ";
    // cin >> n;
    // for(int i = 1; i <= 10; i++) {
    //     cout << n << " X " << i << " = " << n*i << endl;
    // }

    int a, b, temp = 0;
    cout << "Enter value of a, b: ";
    cin >> a >> b;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << "Value of a: " << a << " & " << "Value of b: " << b << " after swaping." << endl;
    a = b + 10;
    a = a - 10;
    b = a + 10;
    b = b - 10;
    cout << "Value of a: " << a << " & " << "Value of b: " << b << " after swaping." << endl;


}