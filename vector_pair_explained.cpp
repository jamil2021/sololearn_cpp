#include <iostream>
#include <vector>
#include <utility> // for std::pair

using namespace std;

int main() {
    // Declare a vector of pairs to store x and y values
    vector<pair<int, int>> data;

    // Example values for x and y
    int x = 42;
    int y = 73;

    // Add the pair (x, y) to the vector
    data.push_back(make_pair(x, y));

    // Accessing elements in the vector
    cout << "First element: (" << data[0].first << ", " << data[0].second << ")" << endl;

    x = 50;
    y = 100;

    // Add the pair (x, y) to the vector
    data.push_back(make_pair(x, y));

    // Accessing elements in the vector
    cout << "Second element: (" << data[1].first << ", " << data[1].second << ")" << endl;

    return 0;
}
