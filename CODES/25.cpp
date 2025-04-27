#include<iostream>
using namespace std;

namespace first{
    void show()
    {
    cout << "Hrithik\n";
    }
}
namespace second{
    void show()  
    {
    cout << "Rahul";
    }
}
 int main(){
    first::show();
    second::show();
 }