#include <bits/stdc++.h>
using namespace std;

void isArraySpecial(const vector<int>& nums, const vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> prefixSum(n + 1, 0);

    // Create a prefix sum array that counts the number of odd numbers
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + (nums[i] % 2);
    }

    for(auto i:prefixSum){
        cout<<i<<" ";
    }cout<<endl;

    vector<bool> ans;
    for (const auto& query : queries) {
        int start = query[0], end = query[1];
        int oddCount = prefixSum[end + 1] - prefixSum[start];
        int rangeSize = end - start + 1;
        int evenCount = rangeSize - oddCount; 

        ans.push_back(oddCount == evenCount);
    }
        
}

    


int main() {
    vector<int> nums = {4, 3, 1, 6};
    vector<vector<int>> queries = {{0, 2}};

    isArraySpecial(nums, queries);

    return 0;
}