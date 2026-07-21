#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Combinatorics.
    Implement basic counting formulas from combinatorics:
    - permutations P(n, k) = n! / (n-k)!
    - combinations C(n, k) = n! / (k! * (n-k)!)
    - arrangements (permutations with groups / multinomial-like)

    Use long long to avoid overflow for moderate inputs.
*/

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long long permutations(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / factorial(n - k);
}

long long combinations(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k;
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - k + i) / i;
    }
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << "Permutations P(" << n << ", " << k << ") = " << permutations(n, k) << endl;
    cout << "Combinations C(" << n << ", " << k << ") = " << combinations(n, k) << endl;

    return 0;
}
