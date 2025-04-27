#include<iostream>
using namespace std;
struct Empl{
    string names;
    int Empl_id;
    double salary;
};
int main(){
    struct Empl mem_var;
    mem_var.names[5] = {"Arjun", "Yudistir", "Bheem", "Nakul", "Sahadev"};
    mem_var.Empl_id[5] = {1, 2, 3, 4, 5};
    mem_var.salary[5] = {5000000, 7000000, 6000000, 5000000, 5000000};
    cout << mem_var.names;
}