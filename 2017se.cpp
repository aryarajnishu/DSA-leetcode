#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> calculatePrefixAndSuffixSum(const vector<int> &arr1, const vector<int> &arr2)
{
    int n = arr1.size();
    vector<vector<int>> result(2, vector<int>(n)); // 2D vector to store prefix and suffix sums

    // Calculate suffix sum for arr1
    result[0][n - 1] = arr1[n - 1]; // Last element is its own suffix sum
    for (int i = n - 2; i >= 0; i--)
    {
        result[0][i] = arr1[i] + result[0][i + 1];
    }

    // Calculate prefix sum for arr2
    result[1][0] = arr2[0]; // First element is its own prefix sum
    for (int i = 1; i < n; i++)
    {
        result[1][i] = arr2[i] + result[1][i - 1];
    }

    return result;
}

long long gridGame(vector<vector<int>> &grid)
{
    vector<vector<int>> arr = calculatePrefixAndSuffixSum(grid[0], grid[1]);
        vector<int> ans;
        int n = arr[0].size();

        ans.push_back(arr[0][1]);
        for(int i=1 ; i<n-1 ; i++){
            ans.push_back(max(arr[0][i+1] , arr[1][i-1]));
        }
        ans.push_back(arr[1][n-2]);

    int  maxElement = *min_element(ans.begin(), ans.end());

    return maxElement;
    
}

int main()
{
    vector<vector<int>> arr = {{20,3,20,17,2,12,15,17,4,15},
                               {20,10,13,14,15,5,2,3,14,3}};
    cout<<gridGame(arr);
}