#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number

    int sum = 0; // initialize sum of digits

    // process each digit of the number
    while(n > 0) {
        int digit = n % 10; // extract last digit
        sum = sum + digit;  // add digit to sum
        n = n / 10;         // remove last digit
    }

    cout << sum; // print the sum of digits

    return 0;
}