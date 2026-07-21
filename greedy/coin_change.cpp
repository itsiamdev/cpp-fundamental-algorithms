#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Metoda Greedy (Greedy method).
    Solve the classic Coin Change problem using greedy:
    given an amount and coin denominations, determine the minimum
    number of coins needed to make that amount using the largest
    denomination possible at each step.

    Default denominations: 1, 5, 10, 50 (RON / leu style).
*/

int main() {
    const vector<int> coins = {50, 10, 5, 1};
    int amount;
    cin >> amount;

    int count = 0;
    for (int c : coins) {
        if (amount == 0) break;
        count += amount / c;
        amount %= c;
    }

    cout << "Minimum coins: " << count << endl;

    return 0;
}
