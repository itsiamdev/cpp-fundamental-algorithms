#include <iostream>
using namespace std;

/*
    PROBLEM:
    Given a number n, print its prime factorization.

    For each prime factor d, print:
    d p
    where p is the exponent of d in the factorization.
*/

int main() {
    int n;
    cin >> n;

    int d = 2;  // current divisor (possible prime factor)
    int p;      // exponent of d

    // continue until n becomes 1
    while (n > 1) {

        // if d divides n, then d is a prime factor
        if (n % d == 0) {

            p = 0;

            // count how many times d divides n
            while (n % d == 0) {
                p++;
                n /= d;
            }

            // print the factor and its exponent
            cout << d << " " << p << endl;
        }

        d++; // move to next possible divisor

        // optimization:
        // if d*d > n and n > 1, then n is prime
        if (n > 1 && d * d > n) {
            d = n;
        }
    }

    return 0;
}