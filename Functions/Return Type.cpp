//The return type of a function specifies the type of value the function will return.
// Explanation: getInteger() returns an int, getDouble() returns a double, and showMessage() returns void.
#include <iostream>
using namespace std;

int getInteger() {
    return 5;
}

double getDouble() {
    return 3.14;
}

void showMessage() {
    cout << "Hello, world!" << endl;
}

int main() {
    cout << getInteger() << endl;
    cout << getDouble() << endl;
    showMessage();
    return 0;
}

