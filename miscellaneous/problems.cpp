#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Diverse (Miscellaneous) problems.
    A small collection of unrelated useful beginner problems:
    - count vowels in a string
    - find the maximum element in a 2D matrix
    - check if a matrix contains a given value
    - rotate an array by one position
*/

void countVowels() {
    string s;
    getline(cin, s);
    string vowels = "aeiouAEIOU";
    int cnt = 0;
    for (char c : s) {
        if (vowels.find(c) != string::npos) {
            cnt++;
        }
    }
    cout << "Vowels: " << cnt << endl;
}

void matrixMax() {
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    int mx = -1e9;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] > mx) mx = mat[i][j];
        }
    }
    cout << "Max: " << mx << endl;
}

bool matrixFind(int mat[][100], int n, int m, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == target) return true;
        }
    }
    return false;
}

void rotateRight(int arr[], int n) {
    if (n <= 1) return;
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    // Example 1: count vowels
    string line = "Hello World";
    cout << "Vowels in '" << line << "': ";
    string vowels = "aeiouAEIOU";
    int cnt = 0;
    for (char c : line) {
        if (vowels.find(c) != string::npos) cnt++;
    }
    cout << cnt << endl;

    // Example 2: matrix max
    int mat[2][3] = {{1, 5, 3}, {7, 2, 9}};
    int mx = -1e9;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] > mx) mx = mat[i][j];
        }
    }
    cout << "Matrix max: " << mx << endl;

    // Example 3: rotate array
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    rotateRight(arr, n);
    cout << "Rotated: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
