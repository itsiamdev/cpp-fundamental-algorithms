#include <iostream>
using namespace std;

/*
📌 Problem:
Read a natural number n.
Print the n-th term of the Fibonacci sequence.

Definition:
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2), for n ≥ 2
*/

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    if (n == 1) {
        cout << 1;
        return 0;
    }

    long long a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}