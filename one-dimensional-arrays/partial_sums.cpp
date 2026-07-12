#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Compute partial sums (prefix sums) of an array.
    prefix[i] = sum of arr[0..i].
*/

int main() {
    int n;
    cin >> n;

    int arr[100], pref[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pref[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }

    cout << "Partial sums: ";
    for (int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }
    cout << endl;

    return 0;
}
