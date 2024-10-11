#include <iostream>
#include <vector>
using namespace std;

void findCombinations(int i, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> current) {
    if (i == candidates.size()) {
        if (target == 0) {
            ans.push_back(current);
        }
        return;
    }

    // Consider the current candidate if target >= candidate[i]
    if (target >= candidates[i]) {
        current.push_back(candidates[i]);
        findCombinations(i, candidates, target - candidates[i], ans, current);
        current.pop_back();  // Backtrack
    }

    // Move to the next candidate
    findCombinations(i + 1, candidates, target, ans, current);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> current;
    findCombinations(0, candidates, target, ans, current);
    return ans;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);

    // Output the result
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
