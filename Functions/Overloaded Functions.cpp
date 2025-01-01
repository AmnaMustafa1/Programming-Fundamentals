// Function overloading occurs when multiple functions have the same name but different parameters.
// Explanation: The add function is overloaded to handle both integers and doubles.

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;
    cout << add(3.5, 4.5) << endl;
    return 0;
}

