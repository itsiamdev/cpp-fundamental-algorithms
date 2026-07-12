#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Simple big number arithmetic using arrays.
    Add two large positive integers.
*/

int main() {
    string a, b;
    cin >> a >> b;

    int n = max(a.size(), b.size());
    int sum[1000] = {0};

    for (int i = 0; i < a.size(); i++) {
        sum[i] += a[a.size() - 1 - i] - '0';
    }
    for (int i = 0; i < b.size(); i++) {
        sum[i] += b[b.size() - 1 - i] - '0';
    }

    for (int i = 0; i < n; i++) {
        if (sum[i] >= 10) {
            sum[i + 1] += sum[i] / 10;
            sum[i] %= 10;
        }
    }

    int len = n;
    while (len > 0 && sum[len] == 0) {
        len--;
    }

    cout << "Sum: ";
    for (int i = len; i >= 0; i--) {
        cout << sum[i];
    }
    cout << endl;

    return 0;
}
