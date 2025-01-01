//A function declaration provides the function's signature before the function is defined, allowing it to be used in the program before its implementation.
//Explanation: The function add is declared before the main() function, and its definition comes afterward.
#include <iostream>
using namespace std;

int add(int, int);  // Function declaration (prototype)

int main() {
    cout << "Sum: " << add(3, 4) << endl;
    return 0;
}

int add(int a, int b) {  // Function definition
    return a + b;
}

