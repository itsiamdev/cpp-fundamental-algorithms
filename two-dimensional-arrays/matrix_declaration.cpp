#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Declararea matricelor (Matrix declaration).
    Declare a 2D array (matrix), read its dimensions and elements,
    then print the matrix.
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

    cout << "Matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
