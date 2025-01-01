// A static function is one that is bound to the class rather than an instance of the class.
// Explanation: The static function increment modifies the static variable count without needing an object instance.

#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static member variable
    static void increment() {
        count++;
    }
};

int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    cout << "Count: " << Counter::count << endl;  // Output will be 2
    return 0;
}

