#include<iostream>
using namespace std;
int main() {
    int size, zero_count = 0, positive_count = 0, negative_count = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    } 
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            zero_count += 1;
        }
        if(arr[i] > 0) {
            positive_count += 1;
        }
        if(arr[i] < 0) {
            negative_count += 1;
        }
    }
    cout << "Zero count: " << zero_count << endl;
    cout << "Positive count: " << positive_count << endl;
    cout << "Negative count: " << negative_count << endl;
    delete[] arr;
}