#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Dynamic Programming - Counting binomial coefficients.
    Compute C(n, k) using Pascal's triangle / DP.
    Recurrence: C(n, k) = C(n-1, k-1) + C(n-1, k)
*/

int main() {
    int n, k;
    cin >> n >> k;

    if (k > n || k < 0) {
        cout << 0 << endl;
        return 0;
    }

    // DP table
    int C[100][100];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }

    cout << "C(" << n << ", " << k << ") = " << C[n][k] << endl;

    return 0;
}
