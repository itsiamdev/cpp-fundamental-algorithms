#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Implement Sieve of Eratosthenes to find all primes up to n.
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

    cout << "Primes up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
