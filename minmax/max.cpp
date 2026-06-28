#include <iostream>   // library for input/output (cin, cout)
using namespace std;

int main() {
    int n;
    cin >> n; // read the number of elements in the sequence

    int x;
    cin >> x; // read the first element
    int maximum = x; // assume the first element is the initial maximum

    // iterate through the rest of the elements (from 2nd to n-th)
    for(int i = 2; i <= n; i++) {
        cin >> x; // read the next element

        // check if the current element is greater than the current maximum
        if(x > maximum)
            maximum = x; // update the maximum if needed
    }

    cout << maximum; // print the maximum value found

    return 0; // end of program
}