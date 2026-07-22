#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Dynamic Programming - Diverse problems.
    Implement a collection of classic DP problems:
    - Longest Increasing Subsequence (LIS) length
    - Longest Common Subsequence (LCS) length
*/

int longestIncreasingSubsequence(const vector<int>& a) {
    int n = a.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int best = 0;
    for (int x : dp) best = max(best, x);
    return best;
}

int longestCommonSubsequence(const string& s1, const string& s2) {
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    vector<int> seq = {10, 20, 10, 30, 20, 50};
    cout << "LIS length: " << longestIncreasingSubsequence(seq) << endl;

    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    cout << "LCS length: " << longestCommonSubsequence(s1, s2) << endl;

    return 0;
}
