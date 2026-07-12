#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Check common array properties:
    - Is the array strictly increasing?
    - Is the array strictly decreasing?
    - Check if all elements are equal.
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool increasing = true;
    bool decreasing = true;
    bool allEqual = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) increasing = false;
        if (arr[i] >= arr[i - 1]) decreasing = false;
        if (arr[i] != arr[i - 1]) allEqual = false;
    }

    cout << (increasing ? "Increasing" : "Not increasing") << endl;
    cout << (decreasing ? "Decreasing" : "Not decreasing") << endl;
    cout << (allEqual ? "All equal" : "Not all equal") << endl;

    return 0;
}
