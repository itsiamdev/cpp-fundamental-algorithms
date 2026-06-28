#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an array of n integers and an integer d,
    determine how many numbers in the array are divisible by d.

    Output the count of such numbers.
*/

int main() {
    int n, d;
    cin >> n >> d; // read number of elements and divisor

    int x;
    int count = 0; // counter for divisible numbers

    // read each element and check divisibility
    for(int i = 1; i <= n; i++) {
        cin >> x;

        if(x % d == 0) {
            count++; // increase counter if divisible
        }
    }

    cout << count; // print result

    return 0;
}