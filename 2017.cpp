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

    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr[i].size() ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int n = grid[0].size();
    int i;
    int x = 0;
    for (i = n - 1; i > 0; i--)
    {
        if (arr[0][i] >= arr[1][i]){
            x = 1;
            break;
        }
    }

    if(x==1){
        if(i==n-1){
            return arr[1][n-2];
        }
        else{
            return max(arr[1][i-1] , arr[0][i+1]);
        }
    }
    else{
        return arr[0][1];
    }
}

int main()
{
    vector<vector<int>> arr = {{20,3,20,17,2,12,15,17,4,15},{20,10,13,14,15,5,2,3,14,3}};
    cout<<gridGame(arr);
}