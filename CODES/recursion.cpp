#include<iostream>
using namespace std;
int fact(int num){                    // num = 5 now, num = 4 now, num = 3 now, num = 2 now, num = 1 now, num = 0 now
    if(num == 0){                     // 5 == 0 false, 4 == 0 false, 3 == 0 false, 2 == 0 false, 1 == 0 false, 0 == 0 true and returns 1 in as value in the original calculation 
        return 1;
    } else {
        return num * fact(num - 1);   // 5*fact(4), 5*4*fact(3), 5*4*3*fact(2), 5*4*3*2*fact(1), 5*4*3*2*1*fact(0), 5*4*3*2*1*1 = 120(factroial of 5)
    }
}
int main(){
    int num;
    cout << "Enter your number: ";    // num  entered = 5(for example only)
    cin >> num;                       // entered number stored in num
    int result = fact(num);           // 5 will get call with fact() fun and go to it fun, then the function fact() gets call here and its value stored in result
    cout << "Factorial of given number " << num << " is " << result << endl;      // printed the ans
}