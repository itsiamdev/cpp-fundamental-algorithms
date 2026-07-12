#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate binary search on a sorted array.
*/

int main() {
    int n, x;
    cin >> n >> x;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
