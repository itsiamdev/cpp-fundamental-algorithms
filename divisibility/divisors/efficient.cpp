#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, print all its divisors.

    A divisor of n is a number i such that n % i == 0.

    Efficient approach: iterate only while i * i <= n.
*/

int main() {
    int n;
    cin >> n; // read the number

    // iterate only up to sqrt(n) using i*i <= n
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            cout << i << " "; // first divisor

            // print paired divisor if different
            if(i != n / i) {
                cout << n / i << " ";
            }
        }
    }

    return 0;
}