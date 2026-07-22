#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Dynamic Programming - 0/1 Knapsack problem.
    Given items with weights and values, and a knapsack capacity,
    find the maximum total value of items you can pack.

    Recurrence: dp[i][c] = max(dp[i-1][c], dp[i-1][c-w[i]] + v[i])
*/

int main() {
    int n;
    cin >> n;

    vector<int> weights(n + 1), values(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> weights[i] >> values[i];
    }

    int capacity;
    cin >> capacity;

    // DP table
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int c = 0; c <= capacity; c++) {
            dp[i][c] = dp[i - 1][c]; // skip item i
            if (weights[i] <= c) {
                dp[i][c] = max(dp[i][c], dp[i - 1][c - weights[i]] + values[i]);
            }
        }
    }

    cout << "Max value: " << dp[n][capacity] << endl;

    return 0;
}
