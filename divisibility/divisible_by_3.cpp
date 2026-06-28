#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is divisible by 3.

    A number is divisible by 3 if the sum of its digits is divisible by 3.

    Output "YES" if n is divisible by 3, otherwise output "NO".
*/

int main() {
    int n;
    cin >> n; // read the number

    int sum = 0;
    int temp = n;

    // calculate sum of digits
    while(temp > 0) {
        sum += temp % 10; // extract last digit
        temp /= 10;       // remove last digit
    }

    // check divisibility by 3 using sum of digits
    if(sum % 3 == 0) {
        cout << "YES"; // divisible by 3
    }
    else {
        cout << "NO"; // not divisible by 3
    }

    return 0;
}