#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Backtracking - Combinatorics.
    Generate all combinations of k elements from n elements.
    This is a classic backtracking problem for combinatorics.
*/

const int MAX = 20;
int arr[MAX];
int n, k;
int current[MAX];

void printCombination() {
    cout << "{ ";
    for (int i = 0; i < k; i++) {
        cout << current[i] << " ";
    }
    cout << "}";
}

void backtrack(int index, int start) {
    if (index == k) {
        printCombination();
        cout << endl;
        return;
    }

    for (int i = start; i < n; i++) {
        // choose element i
        current[index] = arr[i];

        // explore next position
        backtrack(index + 1, i + 1);

        // backtrack: implicit by overwriting current[index] in next iteration
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    backtrack(0, 0);

    return 0;
}
