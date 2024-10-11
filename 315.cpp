#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void countSmaller(vector<int>& nums){
        int n = nums.size();
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            int count = 0;
            for(int j=i+1 ; j<n ; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }

int main(){
    vector<int> nums = {-1,-1};
    countSmaller(nums);
}