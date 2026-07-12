#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Tablouri patratice (Square matrices).
    Read a square matrix (n x n) and compute:
    - the sum of the main diagonal
    - the sum of the secondary diagonal
    - the sum of all elements
*/

int main() {
    int n;
    cin >> n;

    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int mainDiag = 0, secDiag = 0, total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            total += mat[i][j];
            if (i == j) {
                mainDiag += mat[i][j];
            }
            if (i + j == n - 1) {
                secDiag += mat[i][j];
            }
        }
    }

    cout << "Main diagonal sum: " << mainDiag << endl;
    cout << "Secondary diagonal sum: " << secDiag << endl;
    cout << "Total sum: " << total << endl;

    return 0;
}
