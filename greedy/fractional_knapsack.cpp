#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Greedy - Fractional Knapsack.
    Given items with value and weight, and a knapsack capacity,
    maximize total value by possibly taking fractions of items.
    The greedy choice is to take items in decreasing order of value/weight ratio.
*/

struct Item {
    double weight;
    double value;
    double ratio;
};

bool cmpByRatio(const Item& a, const Item& b) {
    return a.ratio > b.ratio;
}

int main() {
    int n;
    cin >> n;

    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].value >> items[i].weight;
        items[i].ratio = items[i].value / items[i].weight;
    }

    sort(items.begin(), items.end(), cmpByRatio);

    double capacity;
    cin >> capacity;

    double totalValue = 0.0;
    for (const auto& it : items) {
        if (capacity == 0) break;

        if (it.weight <= capacity) {
            totalValue += it.value;
            capacity -= it.weight;
        } else {
            totalValue += it.ratio * capacity;
            capacity = 0;
        }
    }

    cout << "Max value: " << totalValue << endl;

    return 0;
}
