#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an array of n integers, determine the minimum element in the array.

    Output the smallest value found.
*/

int main() {
    int n;
    cin >> n; // read number of elements

    int x;
    cin >> x; // read first element

    int minimum = x; // initialize minimum with first element

    // read remaining elements and update minimum
    for(int i = 2; i <= n; i++) {
        cin >> x;

        if(x < minimum) {
            minimum = x; // update minimum if current element is smaller
        }
    }

    cout << minimum; // print the minimum value

    return 0;
}