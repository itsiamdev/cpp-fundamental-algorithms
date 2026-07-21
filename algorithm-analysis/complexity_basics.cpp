#include <iostream>
#include <cmath>
using namespace std;

/*
    PROBLEM STATEMENT:

    Algorithm Efficiency Analysis / Complexity of Algorithms.
    Demonstrate different time complexities by comparing
    simple summation over n, double loop O(n^2), and binary search.
*/

int n;

long long sumLinear(int n) {
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        s += i; // O(n)
    }
    return s;
}

long long sumQuadratic(int n) {
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            s++; // O(n^2)
        }
    }
    return s;
}

bool binarySearch(const int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return true;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return false; // O(log n)
}

int main() {
    cin >> n;
    cout << "Sum (O(n)): " << sumLinear(n) << endl;
    cout << "Iterations (O(n^2)): " << sumQuadratic(n) << endl;

    const int m = 5;
    int a[m] = {1, 2, 3, 4, 5};
    int target;
    cin >> target;
    cout << "Binary search: " << (binarySearch(a, 0, m - 1, target) ? "found" : "not found") << endl;

    return 0;
}
