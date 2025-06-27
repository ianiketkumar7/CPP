#include<iostream>
using namespace std;
int main() {
    int num, j=0,arr[10];
    cin >> num;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            arr[j] = i;
            j++;
            cout<<i<<" is factor"<<endl;
        }
        else{
        cout<<i<<" is not factor"<<endl;
        }
    }
    for(int i=0;i<j;i++){
        cout<<arr[i]<<endl;
    }
}