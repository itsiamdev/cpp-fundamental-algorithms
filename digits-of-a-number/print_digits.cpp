#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number

    // if number is 0, we directly print 0
    if(n == 0) {
        cout << 0;
        return 0;
    }

    // while there are digits left in the number
    while(n > 0) {
        int digit = n % 10; // extract last digit
        cout << digit << " "; // print the digit

        n = n / 10; // remove last digit
    }

    return 0;
}