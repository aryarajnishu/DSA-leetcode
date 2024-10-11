#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> ans;

    int n = nums.size();
    int i = 0;

    while (i < n) {
        int start = nums[i];
        while (i < n - 1 && nums[i + 1] == nums[i] + 1) {
            i++;
        }

        int end = nums[i];

        if (start == end) {
            ans.push_back(to_string(start));
        } else {
            ans.push_back(to_string(start) + "->" + to_string(end));
        }

        i++;
    }

    cout << "ans is: ";
    for (const auto &range : ans) {
        cout << range << " ";
    }
    cout << endl;

    return 0;
}
