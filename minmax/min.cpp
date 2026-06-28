#include <iostream>   // library for input/output (cin, cout)
using namespace std;

int main() {
    int n;
    cin >> n; // read the number of elements

    int x;
    cin >> x; // read the first element
    int minimum = x; // assume the first element is the initial minimum

    // iterate through the rest of the elements
    for(int i = 2; i <= n; i++) {
        cin >> x; // read next element

        // check if current element is smaller than the current minimum
        if(x < minimum)
            minimum = x; // update the minimum
    }

    cout << minimum; // print the minimum value

    return 0;
}