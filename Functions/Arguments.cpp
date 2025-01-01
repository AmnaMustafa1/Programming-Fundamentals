// Arguments are the actual values passed to the function parameters when it is called.
// Explanation: The arguments 3, 6 and 1, 9 are passed to the add function.

#include <iostream>
using namespace std;

int add(int a, int b) { 
    return a + b;
}

int main() {
    cout << "Sum: " << add(3, 6) << endl;  // Arguments: 3 and 6
    cout << "Sum: " << add(1, 9) << endl;  // Arguments: 1 and 9
    return 0;
}

