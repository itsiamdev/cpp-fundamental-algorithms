#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Flood Fill (Algoritm de umplere).
    Given a 2D matrix of colors and a starting cell (sr, sc),
    change the color of the whole connected region of the same color
    to a new color. Connectivity is 4-directional (up, down, left, right).

    This is a classic recursive (DFS) fill algorithm.
*/

int mat[100][100];
int n, m;

void floodFill(int r, int c, int targetColor, int newColor) {
    // out of bounds
    if (r < 0 || r >= n || c < 0 || c >= m) {
        return;
    }
    // already filled or a different color
    if (mat[r][c] != targetColor) {
        return;
    }

    mat[r][c] = newColor; // fill current cell

    // recurse in the four directions
    floodFill(r + 1, c, targetColor, newColor);
    floodFill(r - 1, c, targetColor, newColor);
    floodFill(r, c + 1, targetColor, newColor);
    floodFill(r, c - 1, targetColor, newColor);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int sr, sc, newColor;
    cin >> sr >> sc >> newColor; // starting row, column, new color

    int targetColor = mat[sr][sc];
    if (targetColor != newColor) {
        floodFill(sr, sc, targetColor, newColor);
    }

    // print the filled matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
