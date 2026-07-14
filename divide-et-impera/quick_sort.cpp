#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Metoda Divide et Impera - Sortarea rapida (Quick Sort).
    Sort an array in ascending order using the divide and conquer approach:
    - pick a pivot element
    - partition the array so that elements smaller than the pivot come before
      it and elements greater come after it
    - recursively sort the two partitions
*/

const int MAX = 100;
int arr[MAX];

int partition(int left, int right) {
    int pivot = arr[right]; // choose the last element as pivot
    int i = left - 1;       // boundary of the smaller-element region

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]); // place pivot in its final position

    return i + 1; // index of the pivot
}

void quickSort(int left, int right) {
    if (left >= right) {
        return; // base case: one element or empty
    }
    int p = partition(left, right); // partition around the pivot
    quickSort(left, p - 1);        // sort left partition
    quickSort(p + 1, right);       // sort right partition
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(0, n - 1);

    cout << "Quick sorted: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
