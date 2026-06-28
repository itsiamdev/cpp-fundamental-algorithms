#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given two integers n and d, determine whether n is divisible by d.

    Output "YES" if n is divisible by d, otherwise output "NO".

    Note: Division by zero is not allowed.
*/

int main() {
    int n, d;
    cin >> n >> d; // read number and divisor

    // check divisibility
    if(d != 0 && n % d == 0) {
        cout << "YES"; // n is divisible by d
    }
    else {
        cout << "NO"; // n is not divisible by d (or invalid divisor)
    }

    return 0;
}