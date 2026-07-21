#include <iostream>
#include <vector>
using namespace std;

/*
    PROBLEM STATEMENT:

    Backtracking basics.
    Generate all subsets of a given set using backtracking.
    For each element, decide whether to include it or not, then backtrack.
*/

const int MAX = 20;
int arr[MAX];
int n;
vector<int> current;

void printSubset() {
    cout << "{ ";
    for (int x : current) {
        cout << x << " ";
    }
    cout << "}";
}

void backtrack(int index) {
    if (index == n) {
        printSubset();
        cout << endl;
        return;
    }

    // include arr[index]
    current.push_back(arr[index]);
    backtrack(index + 1);

    // exclude arr[index]
    current.pop_back();
    backtrack(index + 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    backtrack(0);

    return 0;
}
