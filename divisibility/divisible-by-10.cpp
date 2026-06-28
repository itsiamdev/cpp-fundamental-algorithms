#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is divisible by 10.

    A number is divisible by 10 if its last digit is 0.

    Output "YES" if n is divisible by 10, otherwise output "NO".
*/

int main() {
    int n;
    cin >> n; // read the number

    // check divisibility by 10 using last digit
    if(n % 10 == 0) {
        cout << "YES"; // divisible by 10
    }
    else {
        cout << "NO"; // not divisible by 10
    }

    return 0;
}