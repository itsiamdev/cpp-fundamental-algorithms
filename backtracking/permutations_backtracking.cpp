#include <iostream>
#include <vector>
using namespace std;

/*
    PROBLEM STATEMENT:

    Backtracking - Generate all permutations of a set.
    Use backtracking to place each element in every possible position.
*/

const int MAX = 10;
int arr[MAX];
int n;
bool used[MAX];
vector<int> current;

void printPermutation() {
    cout << "[ ";
    for (int x : current) {
        cout << x << " ";
    }
    cout << "]";
}

void backtrack() {
    if ((int)current.size() == n) {
        printPermutation();
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            // choose
            used[i] = true;
            current.push_back(arr[i]);

            // explore
            backtrack();

            // unchoose (backtrack)
            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    backtrack();

    return 0;
}
