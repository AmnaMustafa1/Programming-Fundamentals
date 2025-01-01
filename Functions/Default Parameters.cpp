// Default parameters are parameters that have predefined values if no arguments are passed.
// Explanation: The function greet uses the default parameter "Guest" if no argument is passed.

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();       // Uses default parameter
    greet("John"); // Uses provided argument
    return 0;
}

