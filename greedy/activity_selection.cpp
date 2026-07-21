#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    PROBLEM STATEMENT:

    Greedy - Activity Selection (Interval Scheduling).
    Given a list of activities with start and end times,
    select the maximum number of non-overlapping activities.
    The greedy choice is to always pick the activity that
    finishes earliest among those that start after the last chosen one.
*/

struct Activity {
    int start;
    int end;
    int id;
};

bool cmpByEnd(const Activity& a, const Activity& b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    vector<Activity> acts(n);
    for (int i = 0; i < n; i++) {
        cin >> acts[i].start >> acts[i].end;
        acts[i].id = i + 1;
    }

    sort(acts.begin(), acts.end(), cmpByEnd);

    int lastEnd = -1;
    int selected = 0;
    for (const auto& a : acts) {
        if (a.start >= lastEnd) {
            lastEnd = a.end;
            selected++;
        }
    }

    cout << "Max activities: " << selected << endl;

    return 0;
}
