#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Recursive function to print the digits of a number in order
    (from most significant to least significant).

    For n = 0, print a single 0.
*/

void printDigits(int n) {
    if (n == 0) {
        return; // base case: nothing left to print
    }
    printDigits(n / 10); // print the leading digits first
    cout << (n % 10) << " "; // then print the current last digit
}

int main() {
    int n;
    cin >> n; // read the number

    if (n == 0) {
        cout << 0; // special case
    } else {
        printDigits(n);
    }

    return 0;
}
