#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, compute its control digit.

    The control digit is obtained by repeatedly summing the digits
    of the number until only one digit remains.

    Output the final single digit.
*/

int main() {
    int n;
    cin >> n; // read the number

    // repeat process until we get a single digit
    while(n >= 10) {
        int sum = 0;

        // compute sum of digits
        while(n > 0) {
            sum += n % 10; // extract last digit
            n /= 10;       // remove last digit
        }

        n = sum; // update number with sum of digits
    }

    cout << n; // print control digit

    return 0;
}