#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an array of n integers, determine the maximum element in the array.

    Output the largest value found.
*/

int main() {
    int n;
    cin >> n; // read number of elements

    int x;
    cin >> x; // read first element

    int maximum = x; // initialize maximum with first element

    // read remaining elements and update maximum
    for(int i = 2; i <= n; i++) {
        cin >> x;

        if(x > maximum) {
            maximum = x; // update maximum if current element is larger
        }
    }

    cout << maximum; // print the maximum value

    return 0;
}