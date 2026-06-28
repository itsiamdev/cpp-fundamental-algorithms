#include <iostream>
using namespace std;

/*
    GCD using subtraction method

    Idea:
    Repeatedly subtract the smaller number from the larger one
    until the numbers become equal.
*/

int main() {
    int a, b;
    cin >> a >> b;

    while(a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    cout << a; // or b (they are equal)

    return 0;
}