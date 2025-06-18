#include<iostream>
using namespace std;
int main() {
    /* <1>
    int x;
    cout << "Enter your number: ";
    cin >> x;
    if(x % 2 == 0) {
        cout << "Your number is EVEN." << endl;
    }
    else {
        cout << "Your numberis ODD." << endl;
    }

    <2>
   int year;
   cout << "Enter the year you wnat to check: ";
   cin >> year;
   if((year % 4 == 0) && (year % 100 != 0)) {
    cout << "It's a Leap Year." << endl;
   }
   else if(year % 400 == 0) {
    cout << "It's a Leap Year." << endl;
   }
   else {
    cout << "It's not a Leap year." << endl;
   }
    
   <3>

    int units;
    cout << "Enter your units: ";
    cin >> units;
    float a = 0;
    if(units <= 100) {
        a = (1.5 * units);
        a = a + 50;
        cout << "Output is " << a << endl;
    } 
    else if(units <= 200) {
        a = (1.5 * 100) + (2 * (units - 100));
        a = a + 50;
        cout << "Output is " << a << endl;
    }
    else {
        a = (1.5 * 100);
        units = units - 100;
        a = a + (100*2);
        units = units - 100;
        a = a + (units*3);
        a = a + 50;
        cout << "Output is " << a << endl;
    }
    
    <switch>

   int a, b;
   char sign;
   cout << "Enter the numbers a & b: ";
   cin >> a >> b;
   cout << "Enter the sign: ";
   cin >> sign;

   switch (sign)
   {
   case '+':
   cout << "Addition of numbers is: " << a + b << endl;
   break;
   case '-':
   cout << "Subtraction of numbers is: " << a - b << endl;
   break;
   case '*':xs
   cout << "Multiplication of numbers is: " << a * b << endl;
   break;
   case '/':
   cout << "Division of numbers is: " << a / b << endl;
   break;
   case '%':
   cout << "Modulos of numbers is: " << a % b << endl;
   break;   
   default:
   cout << "Enter correct sign.";
    break;
   }
   */


//    int n;
//    cin >> n;
//    int i = 1;
//    while(i <= 5) {
//     i++;
//     if(i == 3) continue;
//     cout << i << " ";
//   }

// for(int i = 1; i <= 100; i++) {
//     if(i % 5 == 0 || i % 3 == 0) continue;
//     cout << i << " ";
// }
// int i = 1;

//     do {
//         cout << "Task" << i <<" ";
//         i++;
//     }
//     while(i <= 5); {
//         cout << "You have logged in" << endl;
// }

int n;
cout << "Enter the number: ";
cin >> n;
int i = 1;
// while(i <= n) {
//     cout << "* * * *" << endl;
//     i++;
// }

    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << "* " ;
            j++;
        }
        cout << endl;
        i++;
    }
}