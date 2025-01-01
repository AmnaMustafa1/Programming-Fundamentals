// A function template allows the function to work with any data type.
// Explanation: The findMax function works with both integers and doubles using a template.

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMax(3, 7) << endl;
    cout << findMax(3.5, 2.5) << endl;
    return 0;
}

