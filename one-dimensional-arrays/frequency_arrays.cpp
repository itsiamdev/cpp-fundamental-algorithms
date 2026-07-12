#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Use frequency/characteristic arrays to count occurrences.
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[101] = {0};

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequencies:" << endl;
    for (int i = 0; i < 101; i++) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << endl;
        }
    }

    return 0;
}
