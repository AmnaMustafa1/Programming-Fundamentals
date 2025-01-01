// A function pointer stores the address of a function, enabling dynamic function calls.
// Explanation: The function pointer funcPointer is used to dynamically call the displayMessage function.

#include <iostream>
using namespace std;

void displayMessage() {
    cout << "Hello, world!" << endl;
}

int main() {
    void (*funcPointer)() = displayMessage;
    funcPointer();  // Calling function via pointer
    return 0;
}
