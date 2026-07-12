#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Check whether an array contains a non-decreasing or non-increasing subsequence of length k.
*/

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int incLen = 1, decLen = 1;
    bool hasInc = false, hasDec = false;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            incLen++;
        } else {
            incLen = 1;
        }
        if (arr[i] <= arr[i - 1]) {
            decLen++;
        } else {
            decLen = 1;
        }
        if (incLen >= k) hasInc = true;
        if (decLen >= k) hasDec = true;
    }

    cout << (hasInc ? "Yes" : "No") << " (increasing sequence)" << endl;
    cout << (hasDec ? "Yes" : "No") << " (decreasing sequence)" << endl;

    return 0;
}
