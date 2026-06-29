#include <iostream>
using namespace std;

/*
    Check if a number is prime (optimized version)

    Time Complexity: O(sqrt(n) / 2)
*/

int main() {
    int n;
    cin >> n;

    // Step 1: numbers less than 2 are not prime
    if (n < 2) {
        cout << "NO";
        return 0;
    }

    // Step 2: 2 is the only even prime number
    if (n == 2) {
        cout << "YES";
        return 0;
    }

    // Step 3: eliminate all other even numbers
    if (n % 2 == 0) {
        cout << "NO";
        return 0;
    }

    // Step 4: check only odd divisors up to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }

    // Step 5: if no divisors found, it's prime
    cout << "YES";
    return 0;
}