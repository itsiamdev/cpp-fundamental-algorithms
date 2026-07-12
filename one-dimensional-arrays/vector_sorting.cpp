#include <iostream>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate vector/array sorting using std::sort.
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
