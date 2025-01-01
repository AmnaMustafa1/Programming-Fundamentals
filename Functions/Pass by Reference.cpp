// In pass-by-reference, the function receives a reference to the argument, allowing modification of the original variable.
// Explanation: The original variable num is modified because the function uses a reference.

#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10;  // This modifies the original variable
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Num: " << num << endl;  // Output will be 10
    return 0;
}

