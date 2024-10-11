// #include<iostream>
// #include<vector>
// #include<math.h>
// #include<string>
#include<bits/stdc++.h>
// #include <algorithm>
using namespace std;

vector<int> rotate(vector<int> &nums){
        if(nums[0] < nums[1]){
            swap(nums[0],nums[1]);
        }
        int x = nums[1];
        nums.erase( nums.begin() + 1 );
        nums.push_back(x);
        for(int x:nums){
            cout<<x<<" ";
        }
        return nums;
}

void getWinner(vector<int>& arr, int k) {
        int count = 0;
        int nishu;
        vector<int> ans;
        while(count<k){
            int x = max(arr[0],arr[1]);
            ans = rotate(arr);
            for(int x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
            if(ans[0] == x){
                nishu = ans[0];
                count++;
            }
            else{
                count =0;
            }
        }
        // cout<<nishu;
    }

int main(){
    vector<int> nums ={2,1,3,5,4,6,7};
    // nums.erase(nums.begin() , nums.end());
    // cout<<nums[4];
    getWinner(nums, 2);
}