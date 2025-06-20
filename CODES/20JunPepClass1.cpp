#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target) {
    int s = 0, e = n-1;
    while(s<=e) {
        int mid = (s+e)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}
int main() {

}