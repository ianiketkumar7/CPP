#include <iostream>
using namespace std;

int main() {
  int n, i, j, count;
  int arr[100];

  // Get the size of the array
  cout << "Enter the size of the array: ";
  cin >> n;

  // Get the elements of the array
  cout << "Enter the elements of the array: ";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Initialize the frequency array
  int freq[100] = {0};

  // Calculate the frequency of each element
  for (i = 0; i < n; i++) {
    count = 1;
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
       // freq[j] = -1;  Mark the element as visited
      }
    }
    if (freq[i] != -1) {
      freq[i] = count;
    }
  }

  // Print the elements and their frequencies
  cout << "Element\tFrequency\n";
  for (i = 0; i < n; i++) {
    if (freq[i] != 0) {
      cout << arr[i] << "\t" << freq[i] << endl;
    }
  }

  return 0;
}
