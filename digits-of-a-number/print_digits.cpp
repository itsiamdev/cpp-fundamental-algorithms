#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, print all its digits starting from the last digit
    (from right to left).

    If the number is 0, output 0.
*/

int main() {
    int n;
    cin >> n; // read the number

    // special case: if number is 0
    if(n == 0) {
        cout << 0;
        return 0;
    }

    // extract and print digits from right to left
    while(n > 0) {
        int digit = n % 10; // get last digit
        cout << digit << " "; // print digit

        n = n / 10; // remove last digit
    }

    return 0;
}