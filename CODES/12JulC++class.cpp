#include<iostream>
using namespace std;
class AddAmount {
    private:
    int a;

    public:
    
    void input() {
    cout << "Enter your amount: ";
    cin >> a;
    a = 50 + a;   
    }
    int display() {
    cout << a << endl;
    }
};
int main() {
    AddAmount am;
    am.input();
    am.display();
}