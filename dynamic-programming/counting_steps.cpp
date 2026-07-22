#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Dynamic Programming - Counting problems (Probleme de numarare).
    Use DP to count the number of ways to reach the nth step
    if you can climb 1, 2, or 3 steps at a time.

    Recurrence: dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
*/

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    int dp[100];
    dp[0] = 1; // one way to stay at step 0

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if (i >= 2) dp[i] += dp[i - 2];
        if (i >= 3) dp[i] += dp[i - 3];
    }

    cout << "Ways to reach step " << n << ": " << dp[n] << endl;

    return 0;
}
