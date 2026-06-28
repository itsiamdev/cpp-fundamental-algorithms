#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is divisible by 2.

    A number is divisible by 2 if its last digit is even:
    0, 2, 4, 6, 8.
*/

int main() {
    int n;
    cin >> n; // read the number

    // check divisibility by 2
    if(n % 2 == 0) {
        cout << "YES"; // the number is divisible by 2
    }
    else {
        cout << "NO"; // the number is not divisible by 2
    }

    return 0;
}