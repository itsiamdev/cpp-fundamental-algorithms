#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine if it is a prime number.

    A prime number is a number greater than 1 that has exactly two divisors:
    1 and itself.

    Output:
    YES if n is prime
    NO otherwise
*/

int main() {
    int n;
    cin >> n; // read number

    if(n < 2) {
        cout << "NO";
        return 0;
    }

    bool isPrime = true;

    // check divisors up to sqrt(n)
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}