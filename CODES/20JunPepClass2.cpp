#include<iostream>
using namespace std;
// void printallsubarrays(int arr[], int n) {
//     for(int i = 0, i < n, i++) {
//         for(int j = i; j < n; i++) {
//             for(int k = i; k <= j; j++) {

//             }
//         }
//     }
// }
int main() {
    int n, m;
    cout << "Enter the row & coloumn: ";
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin >> arr[i][j];
            cout << endl;
        }
    for(int i = 0; i<n; i++) {
        if(i%2!=0) {
            for(int j = m-1; j>=0; j--) {
            cout << arr[j][i] << " ";
        }
        cout << endl; 
        }
        else { for(int j = 0; j<m; j++) {
            cout << arr[j][i] << " ";
        }
        }
    }
}
}