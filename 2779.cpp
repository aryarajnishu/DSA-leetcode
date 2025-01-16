#include <bits/stdc++.h>
using namespace std;

void maximumBeauty(vector<int>& nums, int k) {
    int n = nums.size();
    vector<vector<int>> p(n,vector<int>(2,0));
    for(int i=0 ; i<nums.size() ; i++){
        p[i][0]  = nums[i]-k;
        p[i][1]  = nums[i]+k;
    }
    sort(nums.begin() , nums.end());
    int count = 0;
    int maxi = 0;
    for(int i=1 ; i<n ; i++){
        if(p[i-1][1] >= p[i][0]){
            count++;
        }
        else{
            count = 0;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi;
}

int main(){
    vector<int> nums = {4,6,1,2};
    int k = 2;
    maximumBeauty(nums,k);
}