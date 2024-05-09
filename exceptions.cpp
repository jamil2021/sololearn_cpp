#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        if (x >= 0 && x < int(size(menu))) {
            // Output the corresponding menu item
            cout << menu[x] << endl;
        }
        else {
            // throw exception of int type
            throw 404;
        }
        
    }
    // ellipsis (...) means it will catch any type of exception
    catch(...) {
        //and here
        cout << "404 - not found" << endl;
        
    }
}