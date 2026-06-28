#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // read the number

    // special case: if number is 0, it has 1 digit
    if(n == 0) {
        cout << 1;
        return 0;
    }

    int count = 0; // initialize digit counter

    // count how many digits the number has
    while(n > 0) {
        count++;    // increase digit count
        n = n / 10; // remove last digit
    }

    cout << count; // print number of digits

    return 0;
}