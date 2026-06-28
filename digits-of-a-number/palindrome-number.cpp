#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number

    int original = n; // store original number
    int reversed = 0;  // will store reversed number

    // build the reversed number
    while(n > 0) {
        int digit = n % 10; // extract last digit
        reversed = reversed * 10 + digit; // build reverse
        n = n / 10; // remove last digit
    }

    // check if original equals reversed
    if(original == reversed)
        cout << "YES"; // it is a palindrome
    else
        cout << "NO"; // it is not a palindrome

    return 0;
}