#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is a palindrome number.

    A number is a palindrome if it reads the same forwards and backwards.

    Output "YES" if it is a palindrome, otherwise output "NO".
*/

int main() {
    int n;
    cin >> n; // read the number

    int original = n; // store original number
    int reversed = 0; // will store reversed number

    // build the reversed number
    while(n > 0) {
        int digit = n % 10; // extract last digit
        reversed = reversed * 10 + digit; // build reverse number
        n = n / 10; // remove last digit
    }

    // check if original equals reversed
    if(original == reversed)
        cout << "YES"; // palindrome number
    else
        cout << "NO"; // not a palindrome number

    return 0;
}