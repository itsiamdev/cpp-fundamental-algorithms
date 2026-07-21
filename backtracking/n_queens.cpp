#include <iostream>
#include <vector>
using namespace std;

/*
    PROBLEM STATEMENT:

    Backtracking - N-Queens problem.
    Place n queens on an n x n chessboard so that no two queens attack each other.
    A queen can attack any piece in the same row, column, or diagonal.
*/

const int MAXN = 20;
int n;
int board[MAXN]; // board[col] = row where queen is placed
int solutions = 0;

bool valid(int col, int row) {
    for (int i = 0; i < col; i++) {
        int prevRow = board[i];
        if (prevRow == row) return false; // same row
        if (abs(prevRow - row) == abs(i - col)) return false; // same diagonal
    }
    return true;
}

void backtrack(int col) {
    if (col == n) {
        solutions++;
        cout << "Solution " << solutions << ":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[j] == i) {
                    cout << " Q ";
                } else {
                    cout << " . ";
                }
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for (int row = 0; row < n; row++) {
        if (valid(col, row)) {
            // place queen
            board[col] = row;

            // explore next column
            backtrack(col + 1);

            // backtrack: overwrite board[col] in next iteration
        }
    }
}

int main() {
    cin >> n;

    if (n > 15) {
        cout << "n is too large for display, but backtracking will still work" << endl;
    }

    backtrack(0);
    cout << "Total solutions: " << solutions << endl;

    return 0;
}
