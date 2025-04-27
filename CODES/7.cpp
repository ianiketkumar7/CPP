#include<iostream>
using namespace std;

class info{
    string name;
    int reg;
    static string section;
    static int R;
    public:
    void ip()
    {
        cout<<"\nEnter the name of student: ";
        cin>>name;
        reg=++R;
    }
    void op()
    {
        cout<<"\n Name = "<<name<<endl;
        cout<<" Reg.No = "<<reg<<endl;
        cout<<" Section = "<<section;
    }
/*   void ststus()
    {
        cout<<"\n Count ="<<R-12300000;
    }              */
};
string info::section="K22KW";  //static initialization
int info:: R=12300000;

main()
{
    info a1[5];
    for(int i=0; i<5; i++)
    a1[i].ip();

    for(int i=0; i<5; i++)
    a1[i].op();

    //a1[i].status();
    cout<<"\n Count ="<<info::R-12300000;
    
}