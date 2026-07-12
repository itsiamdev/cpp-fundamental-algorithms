#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate logical operators, increment/decrement operators, and the conditional (ternary) operator in C++.
*/

int main() {
    int a = 5, b = 10;

    cout << "=== Logical Operators ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "(a < b) && (b > 0): " << ((a < b) && (b > 0)) << endl;
    cout << "(a > b) || (b == 10): " << ((a > b) || (b == 10)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    cout << endl << "=== Increment / Decrement ===" << endl;
    int x = 5;
    cout << "Initial x: " << x << endl;
    cout << "Prefix ++x: " << ++x << " (value after: " << x << ")" << endl;
    x = 5;
    cout << "Postfix x++: " << x++ << " (value after: " << x << ")" << endl;
    x = 5;
    cout << "Prefix --x: " << --x << " (value after: " << x << ")" << endl;
    x = 5;
    cout << "Postfix x--: " << x-- << " (value after: " << x << ")" << endl;

    cout << endl << "=== Conditional (Ternary) Operator ===" << endl;
    int num = 7;
    string result = (num % 2 == 0) ? "even" : "odd";
    cout << "num = " << num << " is " << result << endl;

    int score = 85;
    string grade = (score >= 90) ? "A" :
                   (score >= 80) ? "B" :
                   (score >= 70) ? "C" :
                   (score >= 60) ? "D" : "F";
    cout << "score = " << score << ", grade = " << grade << endl;

    return 0;
}
