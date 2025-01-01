// Parameters are variables listed in the function signature to hold the values passed into the function.
// Explanation: The function multiply takes two parameters a and b to calculate their product.

#include <iostream>
using namespace std;

int multiply(int a, int b) {  // Parameters a, b
    return a * b;
}

int main() {
    cout << "Product: " << multiply(4, 5) << endl;
    return 0;
}

