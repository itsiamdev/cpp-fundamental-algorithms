#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Partial sums in a matrix (2D prefix sums).
    Given an n x m matrix, compute the prefix sum matrix pref,
    where pref[i][j] is the sum of all elements in the rectangle
    from (0,0) to (i,j).

    then answer range sum queries in O(1) using:
    sum of rectangle (r1,c1)..(r2,c2) =
        pref[r2][c2]
        - pref[r1-1][c2]   (if r1 > 0)
        - pref[r2][c1-1]   (if c1 > 0)
        + pref[r1-1][c1-1] (if r1 > 0 and c1 > 0)
*/

int main() {
    int n, m;
    cin >> n >> m;

    int mat[100][100], pref[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pref[i][j] = mat[i][j];
            if (i > 0) pref[i][j] += pref[i - 1][j];
            if (j > 0) pref[i][j] += pref[i][j - 1];
            if (i > 0 && j > 0) pref[i][j] -= pref[i - 1][j - 1];
        }
    }

    cout << "Prefix sum matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << pref[i][j] << " ";
        }
        cout << endl;
    }

    int r1, c1, r2, c2;
    cout << "Query rectangle (r1 c1 r2 c2): ";
    cin >> r1 >> c1 >> r2 >> c2;

    int sum = pref[r2][c2];
    if (r1 > 0) sum -= pref[r1 - 1][c2];
    if (c1 > 0) sum -= pref[r2][c1 - 1];
    if (r1 > 0 && c1 > 0) sum += pref[r1 - 1][c1 - 1];

    cout << "Rectangle sum: " << sum << endl;

    return 0;
}
