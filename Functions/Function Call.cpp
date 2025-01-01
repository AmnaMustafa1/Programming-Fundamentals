//A function call is when we invoke a function by using its name along with the required arguments.
// Explanation: The display function is called twice with different arguments.
#include <iostream>
using namespace std;

void display(int a) {
    cout << "Value: " << a << endl;
}

int main() {
    display(10);  // Function call
    display(20);  // Function call
    return 0;
}

