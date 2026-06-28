#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Given an integer n, determine whether it is divisible by 9.

    A number is divisible by 9 if the sum of its digits is divisible by 9.

    Output "YES" if n is divisible by 9, otherwise output "NO".
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

    // check divisibility by 9 using sum of digits
    if(sum % 9 == 0) {
        cout << "YES"; // divisible by 9
    }
    else {
        cout << "NO"; // not divisible by 9
    }

    return 0;
}