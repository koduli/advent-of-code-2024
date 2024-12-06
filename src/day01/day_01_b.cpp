#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a, b;
    int x, y;

    while (cin >> x >> y) {
        a.push_back(x);
        b.push_back(y);
    }

    // Populate the map with the frequency of each element in b
    map<int,int> freq;
    for (int x : b) {
        freq[x]++; // For each element in b, increment its count in the map
    }

    if (a.size() != b.size()) {
        cout << "Error: Input vectors have different sizes!" << endl;
        return 1;
    }

    long long sum = 0;

    // Calculate the sum, multiplying each element of a by the frequency of that element in b
    for (int x : a) {
        sum += (long long) x * freq[x]; // Multiply x from vector a with its frequency in b
    }

    cout << "Similarity score: " << sum << "\n"; //27384707
    return 0;
}
