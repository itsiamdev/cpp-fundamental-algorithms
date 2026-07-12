#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Parcurgerea matricelor (Matrix traversal).
    Read a matrix and traverse it in several ways:
    - by rows (row-major order)
    - by columns (column-major order)
    - by the main diagonal
    - by the secondary diagonal
*/

int main() {
    int n, m;
    cin >> n >> m;

    int mat[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Row-major traversal: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;

    cout << "Column-major traversal: ";
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;

    cout << "Main diagonal: ";
    for (int i = 0; i < n && i < m; i++) {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal: ";
    for (int i = 0; i < n && i < m; i++) {
        cout << mat[i][m - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}
