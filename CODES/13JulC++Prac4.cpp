#include <iostream>
using namespace std;
 union ABC {
    int a;
    char b;
    float c;
};
int main()
{
 ABC abc;
 abc.a = 34;
cout << "The first value at the allocated memory : " << abc.a << endl;
 abc.b = 'a';
cout << "The next value stored after removing the previous value : " << abc.b << endl;
 abc.c = 34.34;
 cout << "The Final value at the same allocated memory space : " << abc.c << endl;
  }
