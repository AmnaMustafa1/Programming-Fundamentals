// A recursive function is one that calls itself to solve a problem.
// Explanation: The factorial function calls itself to calculate the factorial of a number.

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}

