#include <bits/stdc++.h>
using namespace std;

void longestOnes(vector<int>& nums, int k) {
        vector<int> psum;
        psum.push_back(nums[0]);
        int sum = nums[0];
        for(int i=1 ; i<nums.size() ; i++){
            sum += nums[i];
            psum.push_back(sum);
        }

        for(int i : psum){
            cout<<i<<" ";
        }
        
}

int main(){
    int k = 2;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    longestOnes(nums,k);
    
}