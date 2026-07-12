#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Mars technique using difference arrays.
    Supports range increment in O(1) and prefix-sum reconstruction in O(n).
*/

int main() {
    int n, q;
    cin >> n >> q;

    int diff[100] = {0};

    for (int i = 0; i < q; i++) {
        int l, r, val;
        cin >> l >> r >> val;
        diff[l] += val;
        diff[r + 1] -= val;
    }

    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += diff[i];
        cout << cur << " ";
    }
    cout << endl;

    return 0;
}
