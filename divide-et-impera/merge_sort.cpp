#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Metoda Divide et Impera - Sortarea prin interclasare (Merge Sort).
    Sort an array in ascending order using the divide and conquer approach:
    - divide the array into two halves
    - recursively sort each half
    - merge the two sorted halves
*/

const int MAX = 100;
int arr[MAX];
int temp[MAX];

void merge(int left, int mid, int right) {
    int i = left;    // index in left half
    int j = mid + 1; // index in right half
    int k = left;    // index in temporary array

    // merge the two halves while both have elements
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // copy any remaining elements from the left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    // copy any remaining elements from the right half
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // copy back the sorted portion
    for (int p = left; p <= right; p++) {
        arr[p] = temp[p];
    }
}

void mergeSort(int left, int right) {
    if (left >= right) {
        return; // base case: one element or empty
    }
    int mid = (left + right) / 2;
    mergeSort(left, mid);      // sort left half
    mergeSort(mid + 1, right); // sort right half
    merge(left, mid, right);   // merge the two halves
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(0, n - 1);

    cout << "Merge sorted: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
