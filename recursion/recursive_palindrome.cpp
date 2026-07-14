#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Recursive function to check whether a number is a palindrome,
    i.e. it reads the same forwards and backwards.

    The approach compares the first and last digit, then strips them
    and recurses on the remaining middle part.
*/

int power10(int digits) {
    int p = 1;
    for (int i = 0; i < digits; i++) {
        p *= 10;
    }
    return p;
}

int countDigits(int n) {
    if (n < 10) return 1;
    return 1 + countDigits(n / 10);
}

bool isPalindrome(int n) {
    if (n < 10) {
        return true; // single digit is always a palindrome
    }
    int digits = countDigits(n);
    int first = n / power10(digits - 1); // most significant digit
    int last = n % 10;                   // least significant digit
    if (first != last) {
        return false;
    }
    // remove first and last digit and recurse on the middle
    int middle = (n % power10(digits - 1)) / 10;
    return isPalindrome(middle);
}

int main() {
    int n;
    cin >> n; // read the number

    if (isPalindrome(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
