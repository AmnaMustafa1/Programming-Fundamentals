// In pass-by-value, the function receives a copy of the argument's value, and changes made to it do not affect the original value.
// Explanation: The value of num in main() remains unchanged after calling modifyValue.

#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 10;  // Modification will not affect the original
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Num: " << num << endl;  // Output will still be 5
    return 0;
}

