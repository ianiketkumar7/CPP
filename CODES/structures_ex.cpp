#include<iostream>
using namespace std;
struct Empl{
    string names;
    int Empl_id;
    double salary;
};
int main(){
    struct Empl Employee[5] = {{"Arjun", 1, 5000000}, 
                        {"Yudistir", 2, 7000000}, 
                        {"Bheem", 3, 6000000}, 
                        {"Nakul", 4, 5000000}, 
                        {"Sahadev", 5, 5000000}
};
cout << "Details of the employees -->" << endl;
for(int i = 0; i < 5; i++){
    cout << "Name of the Employee: " << Employee[i].names << endl
         << "Employee ID: " << Employee[i].Empl_id << endl
         << "Salary of the Employee: " << Employee[i].salary << endl;
}
return 0;

    // struct Empl mem_var;
    // string a[5] = {"Arjun", "Yudistir", "Bheem", "Nakul", "Sahadev"};
    // mem_var.names = string a[5];
    // for(int i = 0; i < 5; i++){
    //     cout << mem_var.names(a[i]);
    // }
    // int b[5] = {1, 2, 3, 4, 5};
    // mem_var.Empl_id = int b[5];
    // for(int j = 0; j < 5, j++){
    //     cout << mem_var.Empl_id(b[j]);
    // }
    // double c[5] = {5000000, 7000000, 6000000, 5000000, 5000000};
    // mem_var.salary = double c[5];
    // for(int k = 0; k < 5, k++){
    //     cout << mem_var.salary(c[k]);
    // }
}