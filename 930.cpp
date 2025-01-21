#include <bits/stdc++.h>
using namespace std;

void numSubarraysWithSum(vector<int>& nums, int goal) {
    int n = nums.size();
    vector<int> arr(n);

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        arr[i] = sum + nums[i];
        sum = arr[i];
        cout<<arr[i]<<" ";
    }

    

}

int main(){
    vector<int> nums = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0};
    int traget = 2;

    numSubarraysWithSum(nums , traget);
}