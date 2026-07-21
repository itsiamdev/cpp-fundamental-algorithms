#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Backtracking in a plan (grid).
    Given a maze represented as a 2D grid, find all paths from
    the top-left corner to the bottom-right corner.
    Cells marked 0 are open, cells marked 1 are blocked.
    Movement is allowed only right or down.
*/

const int MAXN = 10;
int n, m;
int grid[MAXN][MAXN];
int solution[MAXN][MAXN];
int pathCount = 0;

bool valid(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == 0 && solution[r][c] == 0;
}

void backtrack(int r, int c) {
    // mark current cell as part of the path
    solution[r][c] = 1;

    // reached the destination
    if (r == n - 1 && c == m - 1) {
        pathCount++;
        cout << "Path " << pathCount << ": ";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << solution[i][j] << " ";
            }
        }
        cout << endl;

        // backtrack to find more paths
        solution[r][c] = 0;
        return;
    }

    // move right
    if (valid(r, c + 1)) {
        backtrack(r, c + 1);
    }

    // move down
    if (valid(r + 1, c)) {
        backtrack(r + 1, c);
    }

    // backtrack: unmark current cell
    solution[r][c] = 0;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) {
        cout << "No path exists!" << endl;
        return 0;
    }

    backtrack(0, 0);
    cout << "Total paths: " << pathCount << endl;

    return 0;
}
