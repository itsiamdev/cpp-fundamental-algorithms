#include <iostream>
using namespace std;

/*
    GCD using Euclid's Algorithm (modulo)

    Idea:
    Replace (a, b) with (b, a % b) until b becomes 0.
*/

int main() {
    int a, b;
    cin >> a >> b;

    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    cout << a;

    return 0;
}