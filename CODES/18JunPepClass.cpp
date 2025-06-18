#include<iostream>
using namespace std;
int main() {
    /*
    - - - 1
    - - 1 2       input is 4
    - 1 2 3
    1 2 3 4
*/
    // int n;
    // cin >> n;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n - i; j++) cout << "-";
//         for(int k = 1; k < i; k++) cout << j;
//         cout << endl;
// }


    // - - - *
    // - - * * *
    // - * * * * *
    // * * * * * * *
    // - * * * * *
    // - - * * *
    // - - - *
  
   

    // for(int i = 1; i<= n; i++) {
    //     for(int j = 1; j <= n-1; j++) cout << " - ";
    //     for(int k = 1; k <= 2*i-1; k++) cout << "*";
    //     cout << endl;
    // }
    // for(int i = n-1; i>=1; i--) {
    //     for(int j = )
    // }

    // int n;
    // cin >> n;
    // int fact = 1;
    // for(int i = 1; i <= n; i++) {     {Factorial Code}
    //     fact *= i;
    // }
    // cout << fact << endl;


    // int n = 5, r;
    // int fact_n = 1;
    // int fact_r = 1;
    // int fact_n_r = 1;
    // for(int i = 1; i <= r; i++) {
    //     fact_r = i*fact_r;
    // }
    // for(int i = 1; i <= n-r; i++) {     
    //     fact_n_r = i*fact_n_r;           {NcR Example}   
    // }
    // for(int i = 1; i <= n; i++) {
    //     fact_n *= i;
    // }
    // int ncr = fact_n/(fact_n - fact_r)*fact_r;
    // cout << ncr << endl;


    int n;
    cout << "Enter value of n till which you are finding the squares: ";
    cin >> n;
    int a;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= i; j++) {
            a = j*j;
            cout << a;
        }
        cout << " ";
    }
}