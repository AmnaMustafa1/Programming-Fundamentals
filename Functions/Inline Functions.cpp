// Inline functions suggest to the compiler to replace the function call with the function's code to optimize performance.
// Explanation: The square function is inline, meaning its code is inserted directly at the call site for efficiency.

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 4: " << square(4) << endl;
    return 0;
}

