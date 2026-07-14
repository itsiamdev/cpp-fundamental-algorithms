#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Recursive function to compute the sum of the digits of a number.
    Given an integer n, return the sum of all its digits.
*/

int sumDigits(int n) {
    if (n == 0) {
        return 0; // base case: no digits left
    }
    return (n % 10) + sumDigits(n / 10); // last digit + sum of the rest
}

int main() {
    int n;
    cin >> n; // read the number

    cout << sumDigits(n); // print sum of digits

    return 0;
}
