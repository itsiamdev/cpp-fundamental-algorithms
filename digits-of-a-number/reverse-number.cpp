#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number

    int reversed = 0; // will store the reversed number

    // build the reversed number digit by digit
    while(n > 0) {
        int digit = n % 10; // extract last digit
        reversed = reversed * 10 + digit; // add digit in reverse order
        n = n / 10; // remove last digit
    }

    cout << reversed; // print the reversed number

    return 0;
}