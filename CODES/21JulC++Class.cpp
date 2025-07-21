#include<iostream>
using namespace std;

class Fruit {
    public:
    int no_of_fruits;
};
class Apples : public Fruit {
    public:
    int no_of_app;
    Apples () {
        cout << "Enter no of apples: ";
        cin >> no_of_app;
        cout << "Number of apples in the basket: " << no_of_app << endl;
    }
};
class Mangoes : public Fruit {
    public:
    int no_of_mang;
    Mangoes() {
        cout << "Enter no of mangoes: ";
        cin >> no_of_mang;
        cout << "Number of mangoes in the basket: " << no_of_mang << endl;
    }
};
int main() {
    Apples ap;
    Mangoes man;
    int total_no_fruits = ap.no_of_app + man.no_of_mang;
    cout << "Total no of fruits in the basket: " << total_no_fruits << endl;
}