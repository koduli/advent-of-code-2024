#include <iostream>  // For input and output operations (cin and cout)
#include <vector>    // To use the vector container for dynamic arrays
#include <cmath>     // For the abs() function to calculate absolute differences
#include <algorithm> // For the sort() function to sort vectors

using namespace std;

int main() {
  // Declare two vectors to store the input values
  vector<int> a, b;
  int x, y;

  // Read pairs of integers from input (until end of file)
  // Each pair is added to the vectors a and b
  while (cin >> x >> y) {  // Read two values per line
    a.push_back(x); // Add x to vector a
    b.push_back(y); // Add y to vector b
  }

  // Sort both vectors in ascending order
  sort(a.begin(), a.end()); // Sort vector a
  sort(b.begin(), b.end()); // Sort vector b

  // Ensure both vectors have the same number of elements
  if (a.size() != b.size()) {
    cout << "Error: Input vectors have different sizes!" << endl;
    return 1; // Exit the program with error code 1 if the sizes are different
  }

  // Initialize a variable to hold the total sum of absolute differences
  long long sum = 0;

  // Calculate the total sum of absolute differences between corresponding elements
  for (int i = 0; i < a.size(); i++) {
    sum += abs(a[i] - b[i]);  // Add the absolute difference between elements in a and b
  }

  // Output the final total sum
  cout << "Total distance: " << sum << "\n";  // 1341714

  return 0;  // Exit the program successfully
}
