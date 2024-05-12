#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Open the CSV file
    ifstream file("data.csv");
    if (!file.is_open()) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    // Vector to store data
    vector<pair<int, int>> data;

    // Read data from the CSV file
    string line;
    getline(file, line); // Read and discard the header line

    getline(file, line); // Read next for testing
    stringstream ss(line);
    string token;
    getline(ss, token, ',');
    cout << token << endl;
    getline(ss, token, ',');
    cout << token << endl;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        // Read x and y values
        getline(ss, token, ',');
        int x = stoi(token);
        getline(ss, token, ',');
        int y = stoi(token);

        // Add to the data vector
        data.push_back(make_pair(x, y));
    }

    // Close the file
    file.close();

    // Display the read data
    cout << "Read data from CSV file:" << endl;
    for (const auto& point : data) {
        cout << "x: " << point.first << ", y: " << point.second << endl;
    }

    return 0;
}
