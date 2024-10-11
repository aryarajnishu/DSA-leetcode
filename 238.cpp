
#include<bits/stdc++.h>
using namespace std;

void productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pro = 1;
        int k;
        int count = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == 0){
                count++;
            }
            pro = pro * nums[i];
        }
        cout<<count<<" ";
        if(count>=2){
            for(int i=0 ; i<nums.size() ; i++){
                ans.push_back(0);
            }
        }
        if(count == 1){
            int product = 1;
            for(int i =0 ; i<nums.size() ; i++){
                if(nums[i] == 0){
                    k = i;
                    continue;
                }
                product = product * nums[i];
            }
            for(int i =0 ; i<nums.size() ; i++){
                if(i==k){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        if(count==0){
            for(int i=0 ; i<nums.size() ; i++){
                int x = pro/nums[i];
                ans.push_back(x);
            }
        }
        for(int x : ans){
            cout<<x<<" ";
        }
}

int main(){
    vector<int> nums = {0,4,0};
    productExceptSelf(nums) ;
}