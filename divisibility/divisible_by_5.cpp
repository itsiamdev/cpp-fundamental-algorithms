#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is divisible by 5.

    A number is divisible by 5 if its last digit is 0 or 5.

    Output "YES" if n is divisible by 5, otherwise output "NO".
*/

int main() {
    int n;
    cin >> n; // read the number

    int lastDigit = n % 10; // extract last digit

    // check divisibility by 5
    if(lastDigit == 0 || lastDigit == 5) {
        cout << "YES"; // divisible by 5
    }
    else {
        cout << "NO"; // not divisible by 5
    }

    return 0;
}