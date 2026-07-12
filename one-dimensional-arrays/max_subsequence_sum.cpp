#include <iostream>
#include <climits>
using namespace std;

/*
    PROBLEM STATEMENT:

    Find the maximum sum of a contiguous subsequence (Kadane's algorithm).
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int best = INT_MIN;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        cur = max(arr[i], cur + arr[i]);
        best = max(best, cur);
    }

    cout << "Max subsequence sum: " << best << endl;

    return 0;
}
