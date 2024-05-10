#include <iostream>
#include <fstream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Open the output file
    ofstream outputFile("data.csv");
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to create output file!" << endl;
        return 1;
    }

    // Write headers
    outputFile << "x,y" << endl;

    // Generate and write 30 records
    for (int i = 0; i < 30; ++i) {
        // Generate random x and y values
        double x = rand() % 100; // Random number between 0 and 99
        double y = rand() % 100; // Random number between 0 and 99

        // Write to file
        outputFile << x << "," << y << endl;
    }

    // Close the output file
    outputFile.close();

    cout << "CSV file generated successfully." << endl;

    return 0;
}
