#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> getDistinctIntervals(vector<pair<int, int>> &intervals) {
    if (intervals.empty()) return {};

    // Sort intervals based on the starting point
    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> distinctIntervals;
    int start = intervals[0].first, end = intervals[0].second;

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].first > end) {
            // Push the previous interval and start a new one
            distinctIntervals.push_back({start, end});
            start = intervals[i].first;
            end = intervals[i].second;
        } else {
            // Merge overlapping or touching intervals
            end = max(end, intervals[i].second);
        }
    }

    // Push the last interval
    distinctIntervals.push_back({start, end});

    return distinctIntervals;
}

int main() {
    vector<pair<int, int>> intervals = {{2, 4}, {3, 5}, {5, 8}};

    vector<pair<int, int>> distinctIntervals = getDistinctIntervals(intervals);

    cout << "Distinct Intervals: \n";
    for (auto &interval : distinctIntervals) {
        cout << "{" << interval.first << ", " << interval.second << "}\n";
    }

    cout << "Total Distinct Intervals: " << distinctIntervals.size() << endl;

    return 0;
}
