#include<iostream>
using namespace std;
int main() {
    int n, count = 1;
    char ch = 'Z';
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i < n; i++) 
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << ch << " ";
            ch--;
        }
        for (int l = 1; l <= n - 1; l++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}


/*

output of this code is:
    Z 1 2 3 4 
   Y X 5 6 7 8 
  W V U 9 10 11 12 
 T S R Q 13 14 15 16 


*/