#include<iostream>
using namespace std;
class Hero{
    // propertie
    private:
    int health;

    public:
    char level;
    char *name;
    static int timeToComplete;

    Hero(){
        cout << "Constructor called." << endl;
        name = new char[100];
    }

    // Parameterized constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    // copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;

        cout << "Copy Constructor called." << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ Name: " << this -> name << ", ";
        cout << "Health: " << this -> health << ", ";
        cout << "Level: " << this -> level << " ] ";
        cout << endl << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }

    static int random(){
        return timeToComplete; 
    }

    //Destructor
    ~Hero(){
        cout << "Destructor bhai called." << endl;
    }
};
int Hero::timeToComplete = 5;


int main(){
    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;


    // Hero a;
    // cout << a.timeToComplete << endl;

    // // static
    // Hero a;

    // //Dynamic
    // Hero *b = new Hero;


    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Nike";
    // hero1.setName(name);

    // hero1.print();


    // // use default copy constructor but remove user defined copy constructor before using default
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();


    // Hero suresh(70, 'c');
    // suresh.print();

    // // copy constructor
    // Hero ritesh(suresh);
    // ritesh.print();

    //  object created statically
    // Hero ramesh(10);
    // cout << "Address of ramresh " << &ramesh << endl;

    //  dynamically
    // Hero *h = new Hero(11);
      
   
    /* 
   // static allocation for object creation
    Hero a;
    a.setLevel('B');
    a.setHealth(80);
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;

    
    //Dynamic allocation for object creation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).getHealth() << endl;
                        // OR
    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;
    
    // // object of class Hero
    // Hero ramesh;
    // // cin >> ramesh.health;
    // // cin >> ramesh.level;

    // // used getter 
    // cout << "Health of Ramesh: " << ramesh.getHealth() << endl;

    // //used setter
    // ramesh.setHealth(70);


    // cout << "Size of Ramesh is: " << sizeof(ramesh) << endl;

    // //ramesh.health = 70;
    // ramesh.level = 'B';
    // cout << "Health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.level << endl;

    // // cout << "Size : " << sizeof(h1) << endl;
    */
}