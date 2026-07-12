#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Merge two sorted arrays into a single sorted array (Interclasare).
*/

int main() {
    int n, m;
    cin >> n >> m;

    int a[100], b[100], c[200];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];

    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
