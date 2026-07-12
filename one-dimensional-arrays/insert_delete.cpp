#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate insert and delete operations in an array.
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, val;
    cin >> pos >> val;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int delPos;
    cin >> delPos;

    for (int i = delPos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
