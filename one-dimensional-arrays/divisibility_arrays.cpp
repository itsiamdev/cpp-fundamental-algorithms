#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Use arrays to solve divisibility problems.
    Count how many numbers in an array are divisible by d.
*/

int main() {
    int n, d;
    cin >> n >> d;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % d == 0) {
            count++;
        }
    }

    cout << "Divisible count: " << count << endl;

    return 0;
}
