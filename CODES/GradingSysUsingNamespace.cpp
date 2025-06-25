#include<iostream>
using namespace std;
namespace StudentSystem {
    void grading(int marks) {
        if(marks <= 33) {
            cout << "Grade: F" << endl;
        }
        else if(marks > 33 && marks <= 49) {
            cout << "Grade: E" << endl;
        }
        else if(marks >= 50 && marks <= 59) {
            cout << "Grade: D" << endl;
        }
        else if(marks >= 60 && marks <= 69) {
            cout << "Grade: C" << endl;
        }
        else if(marks >= 70 && marks <= 79) {
            cout << "Grade: B" << endl;
        }
        else if(marks >= 80 && marks <= 89) {
            cout << "Grade: A" << endl;
        }
        else {
            cout << "Grade: A+" << endl;
        }

    }

    void remarks(int marks) {
        if(marks <= 33) {
            cout << "Failed" << endl;
        }
        else if(marks > 33 && marks <= 49) {
            cout << "Just Passed" << endl;
        }
        else if(marks >= 50 && marks <= 59) {
            cout << "Average" << endl;
        }
        else if(marks >= 60 && marks <= 69) {
            cout << "Above Average" << endl;
        }
        else if(marks >= 70 && marks <= 79) {
            cout << "Good" << endl;
        }
        else if(marks >= 80 && marks <= 89) {
            cout << "Very Good" << endl;
        }
        else {
            cout << "Excellent" << endl;
        }
    }
}

int main() {
    int marks, chos;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Choose:\n1. View Grade\n2. View Remarks\n";
    cout << "Choice: ";
    cin >> chos;
    switch(chos) {
        case 1:
        StudentSystem::grading(marks);
        break;

        case 2:
        cout << "Remarks of your Child: ";
        StudentSystem::remarks(marks);
        break;

        default:
        cout << "Invalid Choice Selected." << endl;
    }
}