#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, print all its divisors.

    A divisor of n is a number i such that n % i == 0.

    This is the brute-force approach (O(n)).
*/

int main() {
    int n;
    cin >> n; // read the number

    // check all numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " "; // i is a divisor of n
        }
    }

    return 0;
}