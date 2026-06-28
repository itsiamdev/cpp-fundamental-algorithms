#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given two integers a and b, compute their Least Common Multiple (LCM).

    The LCM is the smallest number that is divisible by both a and b.

    Example:
    Input: 12 18
    Output: 36
*/

int main() {
    int a, b;
    cin >> a >> b; // read numbers

    int x = a, y = b;

    // compute GCD using Euclid's algorithm
    while(y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    int cmmdc = x;
    int cmmmc = (a / cmmdc) * b;

    cout << cmmmc; // print LCM

    return 0;
}