#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

 int minMaxGame(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        while(n > 1){
            for(int i =0 ; i<n/2 ; i++){
                if(i%2 == 0){
                    ans.push_back(min(nums[2*i] , nums[(2*i)+1]));
                }
                else{
                    ans.push_back(max(nums[2*i] , nums[(2*i)+1]));
                }
            }
            for(int i=0 ; i<ans.size() ; i++){
                nums[i] = ans[i];
            }
            ans = {};
            n = n/2;
        }
        
        return ans[0];
    }

int main(){
   vector<int> nums = {3};
   cout<<minMaxGame(nums);
}