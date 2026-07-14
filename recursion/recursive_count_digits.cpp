#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Recursive function to count the digits of a number.
    Given an integer n, return how many digits it has.

    For n = 0, the number of digits is 1.
*/

int countDigits(int n) {
    if (n == 0) {
        return 1; // base case: 0 has a single digit
    }
    if (n < 10) {
        return 1; // base case: one digit left
    }
    return 1 + countDigits(n / 10); // recursive step: drop last digit
}

int main() {
    int n;
    cin >> n; // read the number

    cout << countDigits(n); // print number of digits

    return 0;
}
