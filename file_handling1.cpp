#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Define the file names
    string inputFileName = "README.md";
    string outputFileName = "output.txt";
    
    // Open the input file
    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error: Unable to open input file: " << inputFileName << endl;
        return 1;
    }
    
    // Open the output file
    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error: Unable to open output file: " << outputFileName << endl;
        return 1;
    }
    
    // Read data from the input file and write to the output file
    string line;
    while (getline(inputFile, line)) {
        // Check if the line starts with '#' or '##'
        if (line.size() > 0 && (line[0] == '#' || (line.size() > 1 && line[0] == '#' && line[1] == '#'))) {
            // Write the line to the output file
            outputFile << line << endl;
        }
    }
    
    // Close the files
    inputFile.close();
    outputFile.close();
    
    cout << "Filtered data has been written to " << outputFileName << endl;
    
    return 0;
}
