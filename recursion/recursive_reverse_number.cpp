#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Recursive function to reverse the digits of a number.
    Given an integer n, return the number formed by reversing its digits.

    A helper carries the accumulator (reversed) and the current power of ten
    so that each digit is placed in the correct position.
*/

int reverseHelper(int n, int reversed) {
    if (n == 0) {
        return reversed; // base case: all digits processed
    }
    return reverseHelper(n / 10, reversed * 10 + (n % 10));
}

int reverseNumber(int n) {
    return reverseHelper(n, 0);
}

int main() {
    int n;
    cin >> n; // read the number

    cout << reverseNumber(n); // print reversed number

    return 0;
}
