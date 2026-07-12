#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Algorithms inspired by Sieve of Eratosthenes.
    Example: Count numbers with a prime number of divisors up to n.
*/

int main() {
    int n;
    cin >> n;

    bool isPrime[100000] = {true};
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    cout << "Primes count: " << count << endl;

    return 0;
}
