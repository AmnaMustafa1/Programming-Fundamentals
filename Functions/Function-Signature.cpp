//The function signature consists of the function's name and the types of its parameters, excluding the return type.
//Explanation: The compiler differentiates between overloaded functions based on the number or type of parameters (signature).
#include <iostream>
using namespace std;

void printMessage(int n) {
    cout << "You entered: " << n << endl;
}

void printMessage(double n) {
    cout << "You entered a decimal: " << n << endl;
}

int main() {
    printMessage(5);
    printMessage(5.5);
    return 0;
}

