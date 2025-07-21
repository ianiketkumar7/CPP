#include<iostream>
using namespace std;
class student {
    private:
    int id;
    public:
    void get_id() {
        cout << "Enter student id: ";
        cin >> id;
    }
};
class testmarks : virtual public student {
    protected:
    int mark1, mark2;
    public:
    int get_marks1() {
        cout << "Enter the marks 1: ";
        cin >> mark1;
        return mark1;
    }
    int get_marks2() {
        cout << "Enter the marks 2: ";
        cin >> mark2;
        return mark2;
    }
};
class sportsmarks : virtual public student {
    protected:
    int PE_mark;
    public:
    int get_PEmark() {
        cout << "Enter PE scores: ";
        cin >> PE_mark;
        return PE_mark;
    }
    
};
class result : public testmarks, public sportsmarks {
    public:
    void total_score() {
        int scores = get_marks1() + get_marks2() + get_PEmark();
        cout << "The total score is: " << scores;
    }
};
int main() {
    result a;
    a.total_score();
}