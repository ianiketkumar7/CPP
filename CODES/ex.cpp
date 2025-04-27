#include <stdio.h>

int main() {
  int n, i, j, count;
  int arr[100];

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Get the elements of the array
  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Initialize the frequency array
  int freq[100] = {0};

  // Calculate the frequency of each element
  for (i = 0; i < n; i++) {
    count = 1;
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
        freq[j] = -1; // Mark the element as visited
      }
    }
    if (freq[i] != -1) {
      freq[i] = count;
    }
  }

  // Print the elements and their frequencies
  printf("Element\tFrequency\n");
  for (i = 0; i < n; i++) {
    if (freq[i] != 0) {
      printf("%d\t%d\n", arr[i], freq[i]);
    }
  }

  return 0;
}