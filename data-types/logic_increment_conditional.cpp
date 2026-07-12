#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate logical operators, increment/decrement operators (prefix and postfix),
    and the conditional (ternary) operator in C++.
*/

int main() {
    int a = 5;
    int b = 10;

    cout << "=== Logical Operators ===" << endl;
    cout << "a < b && b > 0: " << (a < b && b > 0) << endl;
    cout << "a > b || b == 10: " << (a > b || b == 10) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    cout << "\n=== Increment and Decrement ===" << endl;
    int x = 5;
    cout << "Initial x = " << x << endl;
    cout << "Prefix ++x = " << ++x << endl;
    cout << "After prefix, x = " << x << endl;
    cout << "Postfix x++ = " << x++ << endl;
    cout << "After postfix, x = " << x << endl;

    int y = 5;
    cout << "\nInitial y = " << y << endl;
    cout << "Prefix --y = " << --y << endl;
    cout << "After prefix, y = " << y << endl;
    cout << "Postfix y-- = " << y-- << endl;
    cout << "After postfix, y = " << y << endl;

    cout << "\n=== Conditional Operator ===" << endl;
    int maxVal = (a > b) ? a : b;
    cout << "max between a and b: " << maxVal << endl;

    string result = (a % 2 == 0) ? "even" : "odd";
    cout << "a is " << result << endl;

    return 0;
}
