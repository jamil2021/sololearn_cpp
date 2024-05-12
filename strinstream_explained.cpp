#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Example 1: Converting numerical values to string
    int num = 42;
    stringstream ss;
    ss << "The answer to life, the universe, and everything is: " << num;
    string result = ss.str();
    cout << result << endl;

    // Example 2: Parsing a string into numerical values
    string line = "3.14 42 100";
    stringstream ss2(line);
    double pi;
    int x, y;
    ss2 >> pi >> x >> y;
    cout << "Pi: " << pi << ", x: " << x << ", y: " << y << endl;

    return 0;
}
