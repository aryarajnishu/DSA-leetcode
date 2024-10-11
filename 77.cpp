#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void helper(int idx, int k, vector<int>& current, int n) {
    if (current.size() == k) { // Base case: when we have chosen k elements
        ans.push_back(current);
        return;
    }

    if (idx > n) {
        return; // If idx exceeds n, we cannot choose further elements
    }

    // Include the current element
    current.push_back(idx);
    helper(idx + 1, k, current, n);  // Recur to choose next element

    // Exclude the current element and move to the next
    current.pop_back();
    helper(idx + 1, k, current, n);
}

vector<vector<int>> combine(int n, int k) {
    vector<int> current;
    ans.clear(); // Clear previous results
    helper(1, k, current, n);
    return ans;
}

int main() {
    vector<vector<int>> ans = combine(4, 2);
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
