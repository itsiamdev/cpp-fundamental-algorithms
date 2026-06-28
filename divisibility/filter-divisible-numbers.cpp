#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d; // read number of elements and divisor

    int x;

    // read each element and print it if divisible by d
    for(int i = 1; i <= n; i++) {
        cin >> x;

        if(x % d == 0) {
            cout << x << " "; // print divisible number
        }
    }

    return 0;
}