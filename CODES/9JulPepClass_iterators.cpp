#include <iostream>
#include <vector>
using namespace std;

// int main() {
//   // Create a vector called cars that will store strings
//   vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  
//   // Create an iterator named it
//   vector<string>::iterator it;

//   // Use the iterator to loop through the vector
//   for (it = cars.begin(); it != cars.end(); ++it) {
//     cout << *it << "\n";
//   }

//   return 0;
// }

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Create a vector iterator called it
  vector<string>::iterator it;

  // Point to the last element
  it = cars.end() - 1;

  // Print the last element
  cout << *it;
  
  return 0;
}
