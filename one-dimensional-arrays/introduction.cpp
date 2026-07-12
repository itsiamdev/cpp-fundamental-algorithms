#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Introduction to one-dimensional arrays in C++.
    Declare, initialize, and print elements.
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
