#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i = 0,mx = 0,x;
    while(i<nums.size()){
        int count = 0;
        for(int j=0 ; j<nums.size() ; j++){
            if(nums[i]==nums[j]){
                count ++;
            }
        }
        mx = max(mx,count);
        i = i + count;
    }
    return mx;
}

int main(){
    vector<int> ans = {2,2,1,1,1,1,1,2,2};
    cout<<majorityElement(ans);
}